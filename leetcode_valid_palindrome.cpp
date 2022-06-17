#include <iostream>
#include <stdio.h>
#include <string>
#include <bits/stdc++.h>

using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Palindrome.
// Memory Usage: 7.9 MB, less than 7.26% of C++ online submissions for Valid Palindrome.
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string result;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
                result.push_back(s[i]);
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                result.push_back(s[i]);
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                result.push_back(s[i]);
            }
            else
                continue;
        }
        cout << result;
        string result2 = result;
        reverse(result2.begin(), result2.end());
        if (result2 == result)
            return true;
        return false;
    }
};
int main()
{
    Solution solution;
    cout << solution.isPalindrome("0P") << endl;
    return 0;
}