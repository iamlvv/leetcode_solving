#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 21 ms, faster than 37.38% of C++ online submissions for Sort Characters By Frequency.
//Memory Usage: 8.6 MB, less than 39.72% of C++ online submissions for Sort Characters By Frequency.
class Solution
{
public:
    
    string frequencySort(string s)
    {
        map<char, int> m;
        for (auto &i : s)
        {
            m[i]++;
        }
        vector<pair<char, int>> v;
        for (auto &i : m)
        {
            v.push_back(make_pair(i.first, i.second));
        }
        sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) {
            return a.second > b.second;
        });
        string result;
        for (auto &i : v)
        {
            for (int j = 0; j < i.second; j++)
            {
                result += i.first;
            }
        }
        return result;
    }
};
int main()
{
    Solution s;
    cout << s.frequencySort("Aabb");
    return 0;
}