#include <iostream>
#include <vector>

using namespace std;
//Passed
//Runtime: 6 ms, faster than 17.43% of C++ online submissions for Binary Tree Inorder Traversal.
//Memory Usage: 8.6 MB, less than 16.95% of C++ online submissions for Binary Tree Inorder Traversal.
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
        result.push_back(root->val);
        TreeNode *c = recursiveTraversal(root->right, result);

        if (a)
        {
            result.push_back(a->val);
        }
        if (c)
        {
            result.push_back(c->val);
        }
        return nullptr;
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        recursiveTraversal(root, result);
        return result;
    }
};

int main()
{
    return 0;
}