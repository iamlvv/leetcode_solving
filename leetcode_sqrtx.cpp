#include <iostream>

using namespace std;
//Passed
//Runtime: 23 ms, faster than 13.46% of C++ online submissions for Sqrt(x).
//Memory Usage: 5.9 MB, less than 26.45% of C++ online submissions for Sqrt(x).
class Solution
{
public:
    int mySqrt(int x)
    {
        unsigned long long result = 0;
        if (x == 1)
            return 1;
        for (unsigned long long i = 0; i <= x / 2; i++)
        {
            if (i * i <= x && (i + 1) * (i + 1) > x)
            {
                result = i;
                break;
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    int x = 1;
    cout << solution.mySqrt(x) << endl;
    return 0;
}