#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Passed
//Runtime: 4 ms, faster than 36.64% of C++ online submissions for Length of Last Word.
//Memory Usage: 6.6 MB, less than 12.36% of C++ online submissions for Length of Last Word.
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
                continue;
            else
            {
                for (int j = i; j >= 0; j--)
                {
                    if (s[j] != ' ')
                        length++;
                    else
                        break;
                }
                break;
            }
        }
        return length;
    }
};

int main()
{
    Solution solution;
    string s = "   fly me   to   the moon  ";
    cout << solution.lengthOfLastWord(s) << endl;
    return 0;
}