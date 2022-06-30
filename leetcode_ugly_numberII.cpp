#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 10 ms, faster than 78.97% of C++ online submissions for Ugly Number II.
//Memory Usage: 9.6 MB, less than 42.15% of C++ online submissions for Ugly Number II.
class Solution
{
public:
    int min(int a, int b, int c)
    {
        if (a < b)
        {
            if (a < c)
                return a;
            else
                return c;
        }
        else
        {
            if (b < c)
                return b;
            else
                return c;
        }
    }

    int nthUglyNumber(int n)
    {
        vector<int> uglys;
        uglys.push_back(1);
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i = 1; i < n; i++)
        {
            int temp = min(uglys[i2] * 2, uglys[i3] * 3, uglys[i5] * 5);
            uglys.push_back(temp);
            if (temp == uglys[i2] * 2)
                i2++;
            if (temp == uglys[i3] * 3)
                i3++;
            if (temp == uglys[i5] * 5)
                i5++;
        }
        return uglys.back();
    }
};
int main()
{
    Solution s;
    cout << s.nthUglyNumber(10) << endl;
    return 0;
}