#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 7 ms, faster than 51.12% of C++ online submissions for Sum of Left Leaves.
//Memory Usage: 13.3 MB, less than 97.28% of C++ online submissions for Sum of Left Leaves.
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
    int sum = 0;
    void sumofLeaves(TreeNode *root)
    {
        if (root == nullptr)
            return;
        if (root->left && root->left->left == NULL && root->left->right == NULL )
            sum += root->left->val;
        sumofLeaves(root->left);
        sumofLeaves(root->right);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (root == nullptr)
            return;
        if (root->left && root->left->left == NULL && root->left->right == NULL )
            sum += root->left->val;
        sumofLeaves(root);
        return sum;
    }
};

int main()
{
    Solution solution;
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << solution.sumOfLeftLeaves(root) << endl;
    return 0;
}