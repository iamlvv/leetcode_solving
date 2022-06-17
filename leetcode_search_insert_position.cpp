#include <iostream>
#include <vector>

using namespace std;
//Passed
//Runtime: 9 ms, faster than 28.07% of C++ online submissions for Search Insert Position.
//Memory Usage: 9.6 MB, less than 94.66% of C++ online submissions for Search Insert Position.
class Solution
{
public:
    int binarySearch(vector<int> &nums, int l, int r, int x)
    {
        if (r >= l)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == x)
                return mid;
            if (nums[mid] > x)
                return binarySearch(nums, l, mid - 1, x);
            return binarySearch(nums, mid + 1, r, x);
        }
        return -1;
    }
    int searchInsert(vector<int> &nums, int target)
    {
        int result = binarySearch(nums, 0, nums.size() - 1, target);
        if (result == -1)
        {
            if (target > nums[nums.size() - 1])
                return nums.size();
            else if (target < nums[0])
                return 0;
            else
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] > target)
                        return i;
                }
            }
        }
        else
            return result;
        return 0;
    }
};

int main()
{
    vector<int> nums{1, 3, 5, 6};
    int target = 5;
    Solution solution;
    cout << solution.searchInsert(nums, target) << endl;
    return 0;
}