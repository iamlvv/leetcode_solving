#include <iostream>

using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
// Memory Usage: 5.9 MB, less than 56.56% of C++ online submissions for Climbing Stairs.
class Solution
{
public:
    int climbStairs(int n)
    {
        int answer = 0;
        int n1 = 1;
        int n2 = 2;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        for (int i = 3; i <= n; i++)
        {
            answer = n1 + n2;
            n1 = n2;
            n2 = answer;
        }
        return answer;
    }
};
int main()
{
    Solution solution;
    cout << solution.climbStairs(4) << endl;
    return 0;
}