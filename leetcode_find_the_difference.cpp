#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 14 ms, faster than 6.39% of C++ online submissions for Find the Difference.
//Memory Usage: 6.8 MB, less than 25.69% of C++ online submissions for Find the Difference.
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            m[t[i]]--;
        }
        for (auto &i : m) {
            if (i.second != 0) {
                return i.first;
            }
        }
        return ' ';
    }
};

int main() {
    Solution solution;
    string s = "abcd";
    string t = "abcde";
    cout << solution.findTheDifference(s, t) << endl;
    return 0;
}