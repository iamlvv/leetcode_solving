#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
//Passed
//Runtime: 7 ms, faster than 81.94% of C++ online submissions for Reverse Vowels of a String.
//Memory Usage: 7.9 MB, less than 37.91% of C++ online submissions for Reverse Vowels of a String.
class Solution {
public:
    string reverseVowels(string s) {
        string temp;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U') {
                temp += s[i];
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'O' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U') {
                s[i] = temp[temp.length() - 1];
                temp.pop_back();
            }
        }
        return s;
    }
};

int main() {
    string s = "hello";
    Solution solution;
    cout << solution.reverseVowels(s) << endl;
    return 0;
}