#include <iostream>
#include <vector>
using namespace std;
//Passed
//Runtime: 4 ms, faster than 39.07% of C++ online submissions for Binary Tree Preorder Traversal.
//Memory Usage: 8.6 MB, less than 14.86% of C++ online submissions for Binary Tree Preorder Traversal.
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
        result.push_back(root->val);
        TreeNode *a = recursiveTraversal(root->left, result);

        TreeNode *c = recursiveTraversal(root->right, result);
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
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        recursiveTraversal(root, result);
        return result;
    }
};