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

string twoArrays(int k, vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] + B[i] < k)
            return "NO";
    }
    return "YES";
}

int main()
{
    cout << twoArrays(1, {0, 1}, {0, 2});
}