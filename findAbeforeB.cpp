#include <algorithm>
#include <string>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A, int R)
{
    // Implement your solution here
    int size = A.size();
    if (A.size() == R)
        return 0;
    sort(A.begin(), A.end());
    stack<int> temp;
    temp.push(A[R]);
    int count = 1;
    for (int i = R + 1; i < size; i++)
    {
        if (!temp.empty())
        {
            if (A[i] == temp.top())
            {
                temp.pop();
            }
        }
        else
        {
            temp.push(A[i]);
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> temp = {2, 3, 1, 1, 2};
    int X = 2;
    cout << solution(temp, X) << endl;
    return 0;
}
