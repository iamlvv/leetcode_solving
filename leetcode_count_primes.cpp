#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Passed
//Runtime: 310 ms, faster than 51.15% of C++ online submissions for Count Primes.
//Memory Usage: 10.2 MB, less than 92.55% of C++ online submissions for Count Primes.
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * 2; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime[i])
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.countPrimes(10) << endl;
    return 0;
}