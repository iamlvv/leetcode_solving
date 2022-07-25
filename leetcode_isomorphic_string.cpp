#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 10 ms, faster than 56.98% of C++ online submissions for Isomorphic Strings.
//Memory Usage: 7 MB, less than 75.03% of C++ online submissions for Isomorphic Strings.
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        map<char, char> m2;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (m.find(s[i]) == m.end())
            {
                if (m2.find(t[i]) == m2.end())
                {
                    m[s[i]] = t[i];
                    m2[t[i]] = s[i];
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (m[s[i]] != t[i])
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    cout << solution.isIsomorphic("foo", "bar") << endl;
    return 0;
}