#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Is Subsequence.
//Memory Usage: 6.4 MB, less than 70.83% of C++ online submissions for Is Subsequence.
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};

int main() {
    Solution solution;
    string s = "axc";
    string t = "ahbgdc";
    cout << solution.isSubsequence(s, t) << endl;
    return 0;
}