#include <iostream>
#include <vector>
using namespace std;
// Passed
// Runtime: 6 ms, faster than 21.48% of C++ online submissions for Same Tree.
// Memory Usage: 10 MB, less than 45.40% of C++ online submissions for Same Tree.
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
    bool isSameTree(TreeNode *node1, TreeNode *node2)
    {
        if (node1 == NULL && node2 == NULL)
            return true;
        if (node1 && node2 && node1->val == node2->val)
            return (isSameTree(node1->left, node2->left) && isSameTree(node1->right, node2->right));
        return false;
    }
};