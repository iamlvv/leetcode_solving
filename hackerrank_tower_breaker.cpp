#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

template <class T>

void printVector(vector<T> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

string caesarCipher(string s, int k)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 65 || (s[i] > 90 && s[i] < 97) || s[i] > 122)
            continue;
        if (s[i] >= 65 && s[i] <= 90 && k > 90 - s[i])
        {
            int temp = (k - (90 - s[i])) % 26;
            s[i] = 65;
            s[i] = s[i] + temp - 1;
        }
        else if (s[i] >= 97 && s[i] <= 122 && k > 122 - s[i])
        {
            int temp = (k - (122 - s[i])) % 26;
            s[i] = 97;
            s[i] = s[i] + temp - 1;
        }
        else if (k <= 90 - s[i] || k <= 122 - s[i])
            s[i] = s[i] + k;
    }
    return s;
}

int main()
{
    cout << caesarCipher("159357lcfd", 98);
    return 0;
}