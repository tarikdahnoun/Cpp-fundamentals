#include "Graph/Graph.cpp"
#include <vector>
#include <string>

int main() {
    std::vector<std::string> cityNames = {"SFO", "LAX", "LAS", "PHX", "DEN", "JFK"};
    Graph<std::string> graph(6, cityNames);

    graph.add("SFO", "LAX", 120);
    graph.add("SFO", "LAS", 150);
    graph.add("SFO", "JFK", 500);
    graph.add("LAX", "PHX", 75);
    graph.add("LAX", "JFK", 350);
    graph.add("LAS", "DEN", 250);
    graph.add("PHX", "DEN", 150);

    graph.dijkstra("SFO");

    return 0;
}
