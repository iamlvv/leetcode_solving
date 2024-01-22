#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> temp = {-3, 1, 2, -2, 5, 6};
    cout << solution(temp) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    int N = A.size();

    // Sort the array using built in sort, this is O(N*log(N))
    sort(A.begin(), A.end());

    if (N == 3)
    {
        return (A[0] * A[1] * A[2]);
    }

    if (N == 4)
    {
        if (A[2] == 0)
            return A[0] * A[1] * A[2];
        long long int abd = A[0] * A[1] * A[3];
        long long int bcd = A[1] * A[2] * A[3];
        return ((abd > bcd) ? abd : bcd);
    }

    long long int X = A[0] * A[1];
    long long int Y = A[N - 3] * A[N - 2];
    long long int Z = A[N - 1];

    return (((X * Z) > (Y * Z)) ? (X * Z) : (Y * Z));
}