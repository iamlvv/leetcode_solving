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
long long flippingBits(long n)
{
    unsigned long fullOne = 4294967295;
    unsigned long flippedBits = n ^ fullOne;
    return flippedBits;
}

int main()
{
    cout << flippingBits(9);
}