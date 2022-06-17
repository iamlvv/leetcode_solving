#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 30 ms, faster than 45.13% of C++ online submissions for Missing Number.
// Memory Usage: 17.8 MB, less than 93.54% of C++ online submissions for Missing Number.
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }
        return nums.size();
    }
};

int main()
{
    vector<int> nums{9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution solution;
    cout << solution.missingNumber(nums);
    return 0;
}