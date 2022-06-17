#include <iostream>

using namespace std;
// Passed
// Runtime: 1422 ms, faster than 5.88% of C++ online submissions for Valid Perfect Square.
// Memory Usage: 5.8 MB, less than 65.72% of C++ online submissions for Valid Perfect Square.
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        bool check = false;
        if (num == 1)
            return true;
        for (unsigned long long i = 0; i <= num / 2; i++)
        {
            if (i * i == num)
            {
                check = true;
                break;
            }
        }
        return check;
    }
};

int main()
{
    Solution solution;
    int x = 1;
    cout << solution.isPerfectSquare(x) << endl;
    return 0;
}