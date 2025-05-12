#include "GraphInterface.h"
#include <iostream>
#include <limits>
#include <string>
#include <unordered_map>
#include <vector>

const int INF = std::numeric_limits<int>::max();

template <class LabelType> class Graph : public GraphInterface<LabelType>
{
  private:
    std::unordered_map<LabelType, int> vertexIndex;
    std::vector<std::vector<int>> adjacencyMatrix;
    std::vector<LabelType> vertices;

  public:
    Graph(int numVertices, const std::vector<LabelType> &vertexLabels)
        : adjacencyMatrix(numVertices, std::vector<int>(numVertices, INF)), vertices(vertexLabels)
    {
        for (int i = 0; i < numVertices; ++i)
        {
            adjacencyMatrix[i][i] = 0; // distance from i to i is 0
            vertexIndex[vertexLabels[i]] = i;
        }
    }

    int getNumVertices() const override { return vertices.size(); }

    int getNumEdges() const override
    {
        int count = 0;
        for (int i = 0; i < adjacencyMatrix.size(); ++i)
        {
            for (int j = 0; j < adjacencyMatrix[i].size(); ++j)
            {
                if (adjacencyMatrix[i][j] != INF && i != j)
                {
                    ++count;
                }
            }
        }
        return count / 2; // i, j and j, i count as the same edge since the graph has no arrows
    }

    bool add(LabelType start, LabelType end, int edgeWeight) override
    {
        if (vertexIndex.find(start) == vertexIndex.end() ||
            vertexIndex.find(end) == vertexIndex.end())
        {
            return false;
        }
        int startIndex = vertexIndex[start];
        int endIndex = vertexIndex[end];
        adjacencyMatrix[startIndex][endIndex] = edgeWeight;
        adjacencyMatrix[endIndex][startIndex] = edgeWeight; // reverse direction
        return true;
    }

    bool remove(LabelType start, LabelType end) override
    {
        if (vertexIndex.find(start) == vertexIndex.end() ||
            vertexIndex.find(end) == vertexIndex.end())
        {
            return false;
        }
        int startIndex = vertexIndex[start];
        int endIndex = vertexIndex[end];
        adjacencyMatrix[startIndex][endIndex] = INF;
        adjacencyMatrix[endIndex][startIndex] = INF;
        return true;
    }

    int getEdgeWeight(LabelType start, LabelType end) const override
    {
        if (vertexIndex.find(start) == vertexIndex.end() ||
            vertexIndex.find(end) == vertexIndex.end())
        {
            return -1;
        }
        int startIndex = vertexIndex.at(start);
        int endIndex = vertexIndex.at(end);
        return adjacencyMatrix[startIndex][endIndex];
    }

    void depthFirstTraversal(LabelType start, void visit(LabelType &)) override
    {
        // TODO
    }

    void breadthFirstTraversal(LabelType start, void visit(LabelType &)) override
    {
        // TODO
    }

    void dijkstra(LabelType start)
    {
        if (vertexIndex.find(start) == vertexIndex.end())
        {
            std::cerr << "Start vertex not found.\n";
            return;
        }

        int n = adjacencyMatrix.size();
        std::vector<int> dist(n, INF);
        std::vector<bool> visited(n, false);
        dist[vertexIndex[start]] = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            int u = -1;

            for (int j = 0; j < n; ++j)
            {
                if (!visited[j] && (u == -1 || dist[j] < dist[u]))
                {
                    u = j;
                }
            }

            if (dist[u] == INF)
                break;

            visited[u] = true;

            for (int v = 0; v < n; ++v)
            {
                if (!visited[v] && adjacencyMatrix[u][v] != INF &&
                    dist[u] + adjacencyMatrix[u][v] < dist[v])
                {
                    dist[v] = dist[u] + adjacencyMatrix[u][v];
                }
            }
        }

        std::cout << "Cheapest flights from " << start << ":\n";
        for (int i = 0; i < vertices.size(); ++i)
        {
            if (dist[i] == INF)
            {
                std::cout << "To " << vertices[i] << ": No path\n";
            }
            else
            {
                std::cout << "To " << vertices[i] << ": $" << dist[i] << "\n";
            }
        }
    }
};
