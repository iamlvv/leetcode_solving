#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 239 ms, faster than 58.82% of C++ online submissions for Perfect Squares.
//Memory Usage: 9.2 MB, less than 47.23% of C++ online submissions for Perfect Squares.
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j*j <= i; j++) {
                dp[i] = min(dp[i], dp[i-j*j]+1);
            }
        }
        return dp[n];
    }
};
int main()
{
    Solution s;
    cout << s.numSquares(12) << endl;
    return 0;
}