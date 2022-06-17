#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            result[nums[i]] += 1;
        }
        for (int i = 0; i < result.size(); i++)
        {
            if (result[i] > 1)
                return i;
        }
        return result.size();
    }
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        for (int i = 0; i < nums.size(); i++) {
            if (temp.empty()) {temp.push_back(nums[i]);}
            else {
                bool check = false;
                for (int j = 0; j < temp.size(); j++) {
                    if (temp[j] != nums[i]) check = true;
                }
                if (check == true) temp.push_back(nums[i]);
                else continue;
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            cout << temp[i] << " ";
            if (temp[i] != i + 1 && i != 0)
                return i;
        }
        return nums.size();
    }
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        result.push_back(findDuplicate(nums));
        result.push_back(missingNumber(nums));
        return result;
    }
};

int main() {
    vector<int> nums {1,2,2,4};
    vector<int>result;
    Solution solution;
    result = solution.findErrorNums(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}