#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Number.
// Memory Usage: 5.9 MB, less than 87.41% of C++ online submissions for Excel Sheet Column Number.
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int result = 0;
        for (int i = 0; i < columnTitle.length(); i++)
        {
            int d = columnTitle[i] - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};