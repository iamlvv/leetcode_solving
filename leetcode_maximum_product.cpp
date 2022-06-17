#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
// Passed
// Runtime: 450 ms, faster than 5.17% of C++ online submissions for Maximum Product of Two Elements in an Array.
// Memory Usage: 46.6 MB, less than 13.38% of C++ online submissions for Maximum Product of Two Elements in an Array.
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        vector<int> result;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int temp = (nums[i] - 1) * (nums[j] - 1);
                result.push_back(temp);
            }
        }
        sort(result.begin(), result.end());
        return result[result.size() - 1];
    }
};

int main()
{
    vector<int> nums{3, 4, 5, 2};
    Solution solution;
    cout << solution.maxProduct(nums) << endl;
    return 0;
}