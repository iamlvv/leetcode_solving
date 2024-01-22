#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

template <class T>

void printVector(vector<T> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

string pangrams(string s)
{
    unordered_map<char, int> map;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (char x : alphabet)
    {
        map[x] = 0;
    }
    for (char x : s)
    {
        map[x]++;
    }
    for (auto &x : map)
    {
        if (x.second == 0)
        {
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    cout << pangrams("The quick brown fox jumps over the lazy dog");
}