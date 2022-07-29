#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        map<char, int> m;
        for (auto &i : words) {
            for (int j = 0; j < i.size(); j++) {
                m[i[j]]++;
                cout << m[i[j]] << " ";
            }
        }
        for (auto &i : m) {
            if (i.second == words.size()) {
                result.push_back(string(1, i.first));
            }
            //result.push_back(string(1, i.first));
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<string> words = {"bella","label","roller"};
    vector<string> result = s.commonChars(words);
    for (auto &i : result) {
        cout << i << " ";
    }
    return 0;
}