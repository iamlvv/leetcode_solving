#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Excel Sheet Column Title.
// Memory Usage: 5.8 MB, less than 78.34% of C++ online submissions for Excel Sheet Column Title.
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string k = "";
        while (columnNumber--)
        {
            k.push_back(columnNumber % 26 + 'A');
            columnNumber /= 26;
        }
        reverse(k.begin(), k.end());
        return k;
    }
};