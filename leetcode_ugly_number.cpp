#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Passed
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Ugly Number.
//Memory Usage: 5.9 MB, less than 20.05% of C++ online submissions for Ugly Number.
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0) return false;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else if (n % 3 == 0)
            {
                n /= 3;
            }
            else if (n % 5 == 0)
            {
                n /= 5;
            }
            else
            {
                if (n == 1)
                    return true;
                else
                    return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    cout << s.isUgly(3) << endl;
    return 0;
}