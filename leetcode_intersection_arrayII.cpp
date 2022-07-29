#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
// Passed
// Runtime: 3 ms, faster than 96.04% of C++ online submissions for Intersection of Two Arrays II.
// Memory Usage: 10.8 MB, less than 8.02% of C++ online submissions for Intersection of Two Arrays II.
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        map<int, int> m;
        for (auto &i : nums1)
        {
            m[i]++;
        }
        for (auto &i : nums2)
        {
            if (m[i] > 0)
            {
                result.push_back(i);
                m[i]--;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> nums3 = s.intersect(nums1, nums2);
    for (auto &i : nums3)
    {
        cout << i << " ";
    }
    return 0;
}