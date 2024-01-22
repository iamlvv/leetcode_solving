#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solution(int X, vector<int> &A);

int main()
{
    vector<int> temp = {2, 2, 2, 2, 2};
    cout << solution(2, temp) << endl;
    return 0;
}

int solution(int X, vector<int> &A)
{
    // find the earliest time when frog can jump to the other side of the river
    // return -1 if frog can never jump to the other side of the river
    // X: the other side of the river
    // A: array of integers
    // A[i]: the position where one leaf falls at time i
    // A[i] <= X
    // A[i] >= 1
    // A.length <= 100000
    // X >= 1
    // X <= 100000
    // A = {1, 3, 1, 4, 2, 3, 5, 4}
    // X = 5
    // return 6
    // A = {1, 3, 5, 1, 2, 6}
    // X = 6
    // return -1
    // solve:
    // 1. create a vector of size X+1, and initialize all elements to 0
    // 2. loop through A, if the element is less than X+1, set the element to 1
    // 3. loop through the vector, if any element is 0, return -1
    // 4. return the index of the last element that is 1
    map<int, bool> m;
    for (int i = 0; i < A.size(); i++)
    {
        int element = A[i];
        m[element] = true;
        if (m.size() == X)
        {
            return i;
        }
    }
    return -1;
}