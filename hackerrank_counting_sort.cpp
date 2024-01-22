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

vector<int> countingSort(vector<int> arr)
{
    vector<int> temp(100, 0);
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        temp[arr[i]]++;
    }
    return temp;
}

int main()
{
    printVector(countingSort({1, 1, 3, 2, 1}));
}