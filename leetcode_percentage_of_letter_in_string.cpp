#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Percentage of Letter in String.
// Memory Usage: 6.1 MB, less than 83.15% of C++ online submissions for Percentage of Letter in String.
class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        double count = 0.0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == letter)
            {
                count++;
            }
        }
        return floor(count / s.length() * 100.0);
    }
};

int main()
{
    Solution s;
    cout << s.percentageLetter("foobar", 'o');
    return 0;
}