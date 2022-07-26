#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 34 ms, faster than 32.18% of C++ online submissions for Ransom Note.
//Memory Usage: 9 MB, less than 15.09% of C++ online submissions for Ransom Note.
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //return !magazine.find(ransomNote);
        map<char, int> m;
        for (auto &i : magazine)
        {
            m[i]++;
        }
        for (auto &i : ransomNote)
        {
            if (m[i] > 0)
            {
                m[i]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
int main() {
    Solution s;
    cout << s.canConstruct("aab", "baa");
}