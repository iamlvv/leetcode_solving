#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 3 ms, faster than 64.00% of C++ online submissions for Remove Element.
//Memory Usage: 8.9 MB, less than 37.06% of C++ online submissions for Remove Element.
class Solution
{
public:
    void insert(vector<int> &array, int n, int val)
    {
        bool flag = true;
        for (int i = 0; i < array.size(); i++)
        {
            if (n == val)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            array.push_back(n);
    }
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> array;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val) continue;
            else array.push_back(nums[i]);
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
    return 0;
}