#include <iostream>

using namespace std;
// Passed
// Runtime: 18 ms, faster than 53.55% of C++ online submissions for Balanced Binary Tree.
// Memory Usage: 20.9 MB, less than 55.37% of C++ online submissions for Balanced Binary Tree
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
    int max(int a, int b)
    {
        if (a > b)
            return a;
        return b;
    }
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        else if (abs(maxDepth(root->left) - maxDepth(root->right)) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
int main()
{
    return 0;
}