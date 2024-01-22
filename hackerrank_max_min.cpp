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

int maxMin(int k, vector<int> arr)
{
    map<int, int> temp;
    int first = 0;
    int last = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        temp[arr[i]] = i;
    }
    first = temp.begin()->first;
    for (auto x : temp)
    {
        if (k >= 0)
        {
            last = x.first;
        }
        k--;
    }
    return last - first;
}

int main()
{
    cout << maxMin(2, {1, 4, 7, 2});
    return 0;
}