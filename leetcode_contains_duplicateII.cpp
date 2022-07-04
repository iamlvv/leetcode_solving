#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
//Passed
//Runtime: 347 ms, faster than 24.54% of C++ online submissions for Contains Duplicate II.
//Memory Usage: 80.2 MB, less than 25.98% of C++ online submissions for Contains Duplicate II.
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        map<int, int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (ans.count(nums[i]) == 0)
            {
                ans.insert({nums[i], i});
            }
            else
            {
                ans[nums[i]] = abs(ans[nums[i]] - i);
                if (ans[nums[i]] <= k)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    vector<int> nums{1, 2, 3, 1, 2, 3};
    Solution solution;
    cout << solution.containsNearbyDuplicate(nums, 2) << endl;
    return 0;
}