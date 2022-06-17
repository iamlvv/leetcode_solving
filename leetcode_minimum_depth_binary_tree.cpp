#include <iostream>

using namespace std;
// Passed
// Runtime: 324 ms, faster than 52.92% of C++ online submissions for Minimum Depth of Binary Tree.
// Memory Usage: 144.8 MB, less than 24.90% of C++ online submissions for Minimum Depth of Binary Tree.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    int min(int a, int b)
    {
        if (a < b)
            return a;
        return b;
    }
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        else if (!root->left)
            return 1 + minDepth(root->right);
        else if (!root->right)
            return 1 + minDepth(root->left);
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};