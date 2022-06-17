#include <iostream>
#include <vector>
using namespace std;
// Passed
//Runtime: 3 ms, faster than 55.31% of C++ online submissions for Binary Tree Postorder Traversal.
//Memory Usage: 8.5 MB, less than 38.04% of C++ online submissions for Binary Tree Postorder Traversal.
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
    TreeNode *recursiveTraversal(TreeNode *root, vector<int> &result)
    {
        if (root == nullptr)
        {
            return nullptr;
        }

        TreeNode *a = recursiveTraversal(root->left, result);

        TreeNode *c = recursiveTraversal(root->right, result);
        result.push_back(root->val);
        if (c)
        {
            result.push_back(c->val);
        }
        if (a)
        {
            result.push_back(a->val);
        }

        return nullptr;
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> result;
        recursiveTraversal(root, result);
        return result;
    }
};