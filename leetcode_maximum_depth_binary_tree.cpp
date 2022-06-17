#include <iostream>

using namespace std;
//Passed
//Runtime: 17 ms, faster than 24.97% of C++ online submissions for Maximum Depth of Binary Tree.
//Memory Usage: 18.8 MB, less than 89.81% of C++ online submissions for Maximum Depth of Binary Tree.
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
};

int main()
{
    return 0;
}