#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

template <class T>

void printVector(vector<T> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}

int diagonalDifference(vector<vector<int>> arr)
{
    int left = 0, right = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        left += arr[i][i];
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        right += arr[i][arr.size() - 1 - i];
    }
    return abs(left - right);
}

int main()
{
    cout << diagonalDifference({{1, 2, 3}, {4, 5, 6}, {9, 8, 9}});
}