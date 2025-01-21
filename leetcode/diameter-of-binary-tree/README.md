# Diameter of Binary Tree

## Solution 1
Time: `O(n)`, where `n` is number of nodes
Space: `O(h)` where `h` is the heigh of the binary tree

``` c++
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
```
