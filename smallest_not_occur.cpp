#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> temp = {1, 3, 6, 4, 1, 2};
    cout << solution(temp) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    // find the smallest positive integer that does not occur in A
    // solve:
    // 1. create a map
    // 2. loop through A, if the element is positive, set the element to true in the map
    // 3. loop through the map, if any element is false, return the index
    // 4. return the size of the map
    map<int, bool> m;
    for (int i = 0; i < A.size(); i++)
    {
        int element = A[i];
        if (element > 0)
        {
            m[element] = true;
        }
    }
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << endl;
    }
    for (int i = 1; i <= m.size(); i++)
    {
        if (m[i] == false)
        {
            return i;
        }
    }
    return m.size() + 1;
}

int lengthOfLongestSubstring(string s)
{
    int left = 0, len = 0;
    map<char, int> dict;
    for (int right = 0; right < s.size(); right++)
    {
        if (dict.find(s[right]) != dict.end())
        {
            left = max(left, dict[s[right]] + 1);
        }
        dict[s[right]] = right;
        len = max(len, right - left + 1);
    }
    return len;
}