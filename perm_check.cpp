#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> temp = {1, 1};
    cout << solution(temp) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    // check if array A is a permutation
    // solve:
    // 1. create a map
    // 2. loop through A, if the element is positive, set the element to true in the map
    // 3. loop through the map, if any element is false, return the index
    // 4. return the size of the map
    map<int, bool> m;
    for (int i = 0; i < A.size(); i++)
    {
        int element = A[i];
        if (m[element] == true)
        {
            return false;
        }
        if (element > 0)
        {
            m[element] = true;
        }
    }
    for (int i = 1; i <= m.size(); i++)
    {
        if (m[i] == false)
        {
            return false;
        }
    }
    return true;
}