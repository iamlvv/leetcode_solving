#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 3 ms, faster than 71.99% of C++ online submissions for Merge Sorted Array.
// Memory Usage: 9.2 MB, less than 31.55% of C++ online submissions for Merge Sorted Array.
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> array1;
        for (int i = 0; i < m; i++)
        {
            array1.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            array1.push_back(nums2[i]);
        }
        nums1.clear();
        for (int i = 0; i < array1.size(); i++)
        {
            nums1.push_back(array1[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    Solution solution;
    int m = 3, n = 3;
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    vector<int> nums2{2, 5, 6};
    solution.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}