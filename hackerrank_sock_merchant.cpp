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

int sockMerchant(int n, vector<int> ar)
{
    int count = 0;
    map<int, int> temp;
    for (int i = 0; i < ar.size(); i++)
    {
        temp[ar[i]]++;
    }
    for (auto x : temp)
    {
        if (x.second % 2 == 0)
        {
            count += (x.second / 2);
        }
        else
        {
            if (x.second == 1)
                continue;
            else
            {

                count += (x.second - x.second % 2) / 2;
            }
        }
    }
    return count;
}

int main()
{
    cout << sockMerchant(7, {1, 2, 1, 2, 1, 3, 2});
    return 0;
}