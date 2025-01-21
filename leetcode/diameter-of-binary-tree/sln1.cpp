#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
private:
    int calculateHeight(TreeNode* node, int& diameter)
    {
        if (node == nullptr)
        {
            return 0;
        }
        
        int leftHeight = calculateHeight(node->left, diameter);
        int rightHeight = calculateHeight(node->right, diameter);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode* root)
    {
        int diameter = 0;
        calculateHeight(root, diameter);
        return diameter;
    }
};

int main() {
    Solution S;

    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);

    TreeNode* root = node1;
    root->right = node3;
    root->left = node2;
    node2->left = node4;
    node2->right = node5;

    int diameter = S.diameterOfBinaryTree(root);
    cout << "The diameter of the given tree is: " << diameter << endl;

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;

    return 0;
}

/*
The diameter of the given tree is: 3
*/
