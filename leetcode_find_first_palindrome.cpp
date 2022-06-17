#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Passed
// Runtime: 107 ms, faster than 13.02% of C++ online submissions for Find First Palindromic String in the Array.
// Memory Usage: 26.3 MB, less than 5.85% of C++ online submissions for Find First Palindromic String in the Array.
class Solution
{
public:
    bool checkPalindrome(string s)
    {
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (temp == s)
            return true;
        return false;
    }
    string firstPalindrome(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            if (checkPalindrome(words[i]))
                return words[i];
        }
        return "";
    }
};
int main()
{
    return 0;
}