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

int pageCount(int n, int p)
{
    int firstCouple = 0;
    int lastCouple = (n % 2 == 0 ? n / 2 : (n - 1) / 2);
    int currentCouple = 0;
    if (p % 2 == 0)
        currentCouple = p / 2;
    else
        currentCouple = (p - 1) / 2;
    return currentCouple - firstCouple < lastCouple - currentCouple ? currentCouple - firstCouple : lastCouple - currentCouple;
}

int main()
{
    cout << pageCount(5, 3);
    return 0;
}