#include <iostream>
#include <vector>
using namespace std;
// Passed
// Runtime: 7 ms, faster than 64.13% of C++ online submissions for Symmetric Tree.
// Memory Usage: 16.3 MB, less than 78.26% of C++ online submissions for Symmetric Tree.
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
    bool check(TreeNode *node1, TreeNode *node2)
    {
        if (node1 == NULL && node2 == NULL)
            return true;
        if (node1 && node2 && node1->val == node2->val)
            return (check(node1->left, node2->right) && check(node1->right, node2->left));
        return false;
    }
    bool isSymmetric(TreeNode *root)
    {
        return check(root, root);
    }
};