#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 30 ms, faster than 39.24% of C++ online submissions for Majority Element.
// Memory Usage: 20.3 MB, less than 13.93% of C++ online submissions for Majority Element.
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int count = 0;
        int temp = 0;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] == result[0])
            {
                result.push_back(nums[i]);
                if (result.size() > nums.size() / 2)
                    return nums[i];
            }
            if (nums[i] != result[0])
            {
                result.clear();
                result.push_back(nums[i]);
            }
        }
        return result[0];
    }
};
int main()
{
    vector<int> nums{1};
    Solution solution;
    cout << solution.majorityElement(nums) << endl;
    return 0;
}