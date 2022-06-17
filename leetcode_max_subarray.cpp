#include <iostream>
#include <vector>
using namespace std;
//Passed
//Runtime: 189 ms, faster than 16.48% of C++ online submissions for Maximum Subarray.
//Memory Usage: 67.8 MB, less than 11.80% of C++ online submissions for Maximum Subarray.
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max_so_far = INT_MIN, max_temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            max_temp += nums[i];
            if (max_so_far < max_temp)
            {
                max_so_far = max_temp;
            }
            if (max_temp < 0)
                max_temp = 0;
        }
        return max_so_far;
    }
};
int main()
{
    Solution solution;
    vector<int> nums{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << solution.maxSubArray(nums) << endl;
    return 0;
}