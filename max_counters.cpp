#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(int N, vector<int> &A);

int main()
{
    vector<int> temp = {3, 4, 4, 6, 1, 4, 4};
    vector<int> result = solution(5, temp);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counters;
    for (int i = 0; i < N; i++)
    {
        counters.push_back(0);
    }
    int max = 0;
    for (int i = 0; i < A.size(); i++)
    {
        int element = A[i];
        if (element > N)
        {
            for (int j = 0; j < counters.size(); j++)
            {
                counters[j] = max;
            }
        }
        else
        {
            counters[element - 1]++;
            if (counters[element - 1] > max)
            {
                max = counters[element - 1];
            }
        }
    }
    return counters;
}