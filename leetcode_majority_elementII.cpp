#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
// Passed
// Runtime: 23 ms, faster than 31.04% of C++ online submissions for Majority Element II.
// Memory Usage: 16.3 MB, less than 12.62% of C++ online submissions for Majority Element II.
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> count;
        vector<int> result;
        sort(nums.begin(), nums.end());
        result.push_back(nums[0]);
        if (nums.size() == 1)
        {
            count.push_back(nums[0]);
            return count;
        }
        if (nums.size() == 2 && nums[0] != nums[1])
        {
            count.push_back(nums[0]);
            count.push_back(nums[1]);
            return count;
        }
        else if (nums.size() == 2 && nums[0] == nums[1])
        {
            count.push_back(nums[0]);
            return count;
        }
        if (result.size() > floor(nums.size() / 3))
            count.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] == result[0] && i != 0)
            {
                result.push_back(nums[i]);
            }
            if (nums[i] != result[0] || i == nums.size() - 1)
            {
                if (result.size() > floor(nums.size() / 3))
                    count.push_back(nums[i - 1]);
                result.clear();
                result.push_back(nums[i]);
                if (result.size() > floor(nums.size() / 3))
                    count.push_back(nums[i]);
            }
        }
        return count;
    }
};

int main()
{
    vector<int> nums{2, 2};
    Solution solution;
    vector<int> result = solution.majorityElement(nums);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}