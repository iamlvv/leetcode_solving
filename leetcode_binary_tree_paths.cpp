#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 8 ms, faster than 43.21% of C++ online submissions for Binary Tree Paths.
//Memory Usage: 13.5 MB, less than 25.83% of C++ online submissions for Binary Tree Paths.
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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        if (!root) return result;
        if (!root->left && !root->right)
        {
            result.push_back(to_string(root->val));
            return result;
        }
        if (root->left)
        {
            for (auto &i : binaryTreePaths(root->left))
            {
                result.push_back(to_string(root->val) + "->" + i);
            }
        }
        if (root->right)
        {
            for (auto &i : binaryTreePaths(root->right))
            {
                result.push_back(to_string(root->val) + "->" + i);
            }
        }
        return result;
    }
};