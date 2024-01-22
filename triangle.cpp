#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> temp = {10, 50, 5, 1};
    cout << solution(temp) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    // determine whether a triangle can be built from a given set of edges.
    // A = [10, 2, 5, 1, 8, 20] -> 1
    // A = [10, 50, 5, 1] -> 0
    // N is an integer within the range [0..100,000];
    // each element of array A is an integer within the range [−2,147,483,648..2,147,483,647].
    int N = A.size();
    // solve:
    // 1. sort the array
    // 2. check if A[i] + A[i+1] > A[i+2]
    // 3. if yes, return 1
    // 4. if no, return 0
    if (N < 3)
        return 0;
    sort(A.begin(), A.end());
    for (int i = 0; i < N - 2; i++)
    {
        if (A[i] + A[i + 1] > A[i + 2])
            return 1;
    }
    return 0;
}