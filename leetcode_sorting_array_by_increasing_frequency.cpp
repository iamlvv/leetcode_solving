#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
// Passed
// Runtime: 8 ms, faster than 80.40% of C++ online submissions for Sort Array by Increasing Frequency.
// Memory Usage: 11.4 MB, less than 58.11% of C++ online submissions for Sort Array by Increasing Frequency.
class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        map<int, int> m;
        for (auto &i : nums)
        {
            m[i]++;
        }
        vector<pair<int, int>> v;
        for (auto &i : m)
        {
            v.push_back(make_pair(i.first, i.second));
        }
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
             {
            if (a.second == b.second)
            {
                return a.first > b.first;
            }
            return a.second < b.second; });
        vector<int> result;
        for (auto &i : v)
        {
            for (int j = 0; j < i.second; j++)
            {
                result.push_back(i.first);
            }
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> v = {2, 3, 1, 3, 2};
    vector<int> result = s.frequencySort(v);
    for (auto &i : result)
    {
        cout << i << " ";
    }
    return 0;
}