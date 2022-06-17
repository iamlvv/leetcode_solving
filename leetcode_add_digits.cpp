#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 5 ms, faster than 22.25% of C++ online submissions for Add Digits.
//Memory Usage: 5.8 MB, less than 75.88% of C++ online submissions for Add Digits.
class Solution
{
public:
    int addDigits(int num)
    {
        int result = 0;
        if (num == 0)
            return 0;
        while (1)
        {
            while (num != 0)
            {
                int b = num % 10;
                result += b;
                num /= 10;
            }
            if (result <= 9)
                break;
            else
            {
                num = result;
                result = 0;
                continue;
            }
        }
        return result;
    }
};
int main()
{
    Solution solution;
    cout << solution.addDigits(38) << endl;
    return 0;
}