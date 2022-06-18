#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Passed
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Summary Ranges.
//Memory Usage: 7 MB, less than 26.11% of C++ online submissions for Summary Ranges.
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;
        if (nums.size() == 0)
        {
            return result;
        }
        int start = nums[0];
        int end = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == end + 1)
            {
                end = nums[i];
            }
            else
            {
                if (start == end)
                {
                    result.push_back(to_string(start));
                }
                else
                {
                    result.push_back(to_string(start) + "->" + to_string(end));
                }
                start = nums[i];
                end = nums[i];
            }
        }
        if (start == end)
        {
            result.push_back(to_string(start));
        }
        else
        {
            result.push_back(to_string(start) + "->" + to_string(end));
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    Solution solution;
    vector<string> words;
    words = solution.summaryRanges(nums);
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }
}