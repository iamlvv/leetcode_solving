#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;

int solution(vector<int> &A, vector<int> &B);

int main()
{
    vector<int> temp = {4, 3, 2, 1, 5};
    vector<int> temp2 = {0, 1, 0, 0, 0};
    cout << solution(temp, temp2) << endl;
    return 0;
}

int solution(vector<int> &A, vector<int> &B)
{
    // return the number of fish that will stay alive
    stack<int> s;
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (B[i] == 1)
        {
            s.push(A[i]);
        }
        else
        {
            while (!s.empty())
            {
                if (s.top() > A[i])
                {
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            if (s.empty())
            {
                count++;
            }
        }
    }
    return count + s.size();
}