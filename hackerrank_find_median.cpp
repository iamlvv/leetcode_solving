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

int findMedian(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr[(arr.size() - 1) / 2];
}

int main()
{
    cout << findMedian({0, 1, 2, 4, 6, 5, 3});
    return 0;
}