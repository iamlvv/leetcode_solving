#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 16 ms, faster than 22.07% of C++ online submissions for Intersection of Two Arrays.
//Memory Usage: 10.7 MB, less than 23.50% of C++ online submissions for Intersection of Two Arrays.
class Solution {
public:
    bool find(vector<int> &result, int index) {
        for (int i = 0; i < result.size(); i++) {
            if (result[i] == index) {
                return true;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
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
                // if (!find(result, i)) {
                //     result.push_back(i);
                // }
                result.push_back(i);
                m[i]--;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> nums3 = s.intersection(nums1, nums2);
    for (auto &i : nums3)
    {
        cout << i << " ";
    }
    return 0;
}