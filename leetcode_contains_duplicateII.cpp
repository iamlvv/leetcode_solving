#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size() && abs(i - j) <= k; j++) {
                if (nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int>nums {1,2,3,1,2,3};
    Solution solution;
    cout << solution.containsNearbyDuplicate(nums, 2) << endl;
    return 0;
}