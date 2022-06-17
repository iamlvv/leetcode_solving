#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 46 ms, faster than 9.20% of C++ online submissions for Remove Duplicates from Sorted Array.
//Memory Usage: 18.6 MB, less than 8.72% of C++ online submissions for Remove Duplicates from Sorted Array
class Solution
{
public:
    void insert(vector<int> &array, int n)
    {
        bool flag = true;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] == n)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            array.push_back(n);
    }
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> array;
        for (int i = 0; i < nums.size(); i++)
        {
            insert(array, nums[i]);
        }
        for (int i = 0; i < array.size(); i++)
        {
            nums[i] = array[i];
        }
        return array.size();
    }
};

int main()
{
    Solution solution;
    vector<int> nums{0, 1, 2, 1, 2, 3, 4};
    cout << solution.removeDuplicates(nums) << endl;
    return 0;
}