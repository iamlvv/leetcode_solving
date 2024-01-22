#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <stack>
using namespace std;

template <class T>

void printVector(vector<T> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

int birthday(vector<int> s, int d, int m)
{
    int divisionCount = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int last = i + m - 1;
        int sum = 0;
        if (last < s.size())
        {
            for (int j = i; j <= last; j++)
            {
                sum += s[j];
            }
        }
        if (sum == d)
        {
            divisionCount++;
        }
    }
    return divisionCount;
}

int main()
{
    cout << birthday({2, 2, 1, 3, 2}, 4, 2);
}