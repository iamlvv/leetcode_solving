#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Passed
//Runtime: 21 ms, faster than 93.33% of C++ online submissions for Move Zeroes.
//Memory Usage: 19.1 MB, less than 97.83% of C++ online submissions for Move Zeroes.
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                swap(nums[j++], nums[i]);
        }
    }
};

int main()
{
    return 0;
}