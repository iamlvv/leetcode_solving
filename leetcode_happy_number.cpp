#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 4 ms, faster than 42.43% of C++ online submissions for Happy Number.
//Memory Usage: 6 MB, less than 63.75% of C++ online submissions for Happy Number.
class Solution
{
public:
    bool check_loop(vector<int> &array, int n)
    {
        for (int i = 0; i < array.size(); i++)
        {
            if (n == array[i])
                return false;
        }
        return true;
    }
    vector<int> number_to_array(int n)
    {
        vector<int> result;
        while (n != 0)
        {
            int b = n % 10;
            result.push_back(b);
            n /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
    bool isHappy(int n)
    {
        if (n == 1 || n == 7)
            return true;

        int sum = n, x = n;
        while (sum > 9)
        {
            sum = 0;
            while (x > 0)
            {
                int d = x % 10;
                sum += d * d;
                x /= 10;
            }
            if (sum == 1)
                return true;

            x = sum;
        }
        if (sum == 7)
            return true;

        return false;
    }
};

int main()
{
    Solution solution;
    cout << solution.isHappy(2) << endl;
    return 0;
}