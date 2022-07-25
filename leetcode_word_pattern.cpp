#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
// Passed
// Runtime: 5 ms, faster than 17.90% of C++ online submissions for Word Pattern.
// Memory Usage: 6.4 MB, less than 82.89% of C++ online submissions for Word Pattern.
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        s += ' ';
        string temp;
        vector<string> words;
        vector<string> words2(26, "");
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                words.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }
        if (words.size() != pattern.size())
            return false;
        for (int i = 0; i < words.size(); i++)
        {
            words2[pattern[i] - 'a'] = words[i];
        }
        for (int i = 0; i < 25; i++)
        {
            for (int j = i + 1; j < 26; j++)
            {
                if (words2[i] == words2[j] && words2[i].size())
                    return false;
            }
        }
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i] != words2[pattern[i] - 'a'])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    cout << solution.wordPattern("abba", "dog cat cat dog") << endl;
    return 0;
}