#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
//Passed
//Runtime: 2 ms, faster than 62.21% of C++ online submissions for Plus One.
//Memory Usage: 8.8 MB, less than 12.87% of C++ online submissions for Plus One.
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1] += 1;
            return digits;
        }
        else
        {
            bool flag = true;
            vector<int> result;
            result.push_back(1);
            for (int i = digits.size() - 1; i >= 0; i--)
            {

                if (digits[i] + 1 <= 9)
                {
                    if (flag == true)
                        digits[i] += 1;
                    flag = false;
                }
                else if (digits[i] + 1 == 10)
                {

                    if (i != 0 && flag == true)
                    {
                        digits[i] = 0;
                        flag = true;
                    }
                    // else digits[i] += 1;
                }
                if (digits[0] == 9 && flag == true && i == 0 || digits[0] == 9 && digits.size() == 1)
                {
                    digits[0] = 0;
                    for (int j = 0; j < digits.size(); j++)
                    {
                        result.push_back(digits[j]);
                    }
                    return result;
                }
            }
            return digits;
        }
    }
};

int main()
{
    vector<int> plusOne{9, 9, 9, 9, 9};
    Solution solution;
    vector<int> result = solution.plusOne(plusOne);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}