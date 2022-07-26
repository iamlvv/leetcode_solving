#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 71 ms, faster than 35.20% of C++ online submissions for First Unique Character in a String.
//Memory Usage: 10.9 MB, less than 15.61% of C++ online submissions for First Unique Character in a String.
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        for (auto &i : s)
        {
            m[i]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    cout << s.firstUniqChar("leetcode");
    return 0;
}