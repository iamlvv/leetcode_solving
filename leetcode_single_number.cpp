#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 34 ms, faster than 36.07% of C++ online submissions for Single Number.
// Memory Usage: 17 MB, less than 22.83% of C++ online submissions for Single Number.
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        stack<int> result;
        result.push(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (result.empty())
            {
                result.push(nums[i]);
            }
            else
            {
                if (nums[i] == result.top())
                {
                    result.pop();
                }
            }
        }
        return result.top();
    }
};
int main()
{
    Solution solution;
    vector<int> nums{4, 1, 2, 1, 2};
    cout << solution.singleNumber(nums) << endl;
    return 0;
}