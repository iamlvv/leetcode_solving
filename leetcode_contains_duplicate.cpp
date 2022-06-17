#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 136 ms, faster than 40.32% of C++ online submissions for Contains Duplicate.
// Memory Usage: 47.2 MB, less than 71.51% of C++ online submissions for Contains Duplicate.
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
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
                    return true;
                }
                else
                    result.push(nums[i]);
            }
        }
        return false;
    }
};

int main()
{
    vector<int> nums{1, 2, 3, 4};
    Solution solution;
    cout << solution.containsDuplicate(nums) << endl;
    return 0;
}