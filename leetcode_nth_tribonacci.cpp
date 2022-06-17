#include <iostream>
#include <vector>
using namespace std;
//Passed
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for N-th Tribonacci Number.
//Memory Usage: 6.1 MB, less than 19.32% of C++ online submissions for N-th Tribonacci Number.
class Solution
{
public:
    int tribonacci(int x)
    {
        if (x == 0)
            return 0;
        vector<int> v = {0, 1, 1};
        for (int i = 3; i <= x; i++)
        {
            int n = v.size();
            int sum = v[n - 1] + v[n - 2] + v[n - 3];
            v.push_back(sum);
        }
        return v[v.size() - 1];
    }
};
int main()
{
    //cout << tribonacci(34) << endl;
    return 0;
}