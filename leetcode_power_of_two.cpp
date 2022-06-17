#include <iostream>
#include <math.h>
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Two.
// Memory Usage: 5.9 MB, less than 70.19% of C++ online submissions for Power of Two.
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
            return false;
        while (n % 2 == 0)
            n /= 2;
        return n == 1;
    }
};
int main()
{
    Solution solution;
    cout << solution.isPowerOfTwo(20913435);
    return 0;
}