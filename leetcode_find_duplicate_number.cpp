#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 207 ms, faster than 31.86% of C++ online submissions for Find the Duplicate Number.
// Memory Usage: 63.8 MB, less than 20.32% of C++ online submissions for Find the Duplicate Number.
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            result[nums[i]] += 1;
        }
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] > 1)
                return i;
        }
        return result.size();
    }
};

int main()
{
    vector<int> nums{1, 3, 4, 2, 2};
    Solution solution;
    cout << solution.findDuplicate(nums);
    return 0;
}