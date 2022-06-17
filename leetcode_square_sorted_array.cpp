#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 82 ms, faster than 7.22% of C++ online submissions for Squares of a Sorted Array.
// Memory Usage: 26 MB, less than 34.32% of C++ online submissions for Squares of a Sorted Array.
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = pow(nums[i], 2);
        }
        sort(nums.begin(), nums.end());
    }
};

int main()
{
    Solution solution;
    vector<int> nums{-4, -1, 0, 3, 10};

    return 0;
}