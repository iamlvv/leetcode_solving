#include <iostream>
#include <vector>

using namespace std;
//Passed
//Runtime: 184 ms, faster than 37.35% of C++ online submissions for Best Time to Buy and Sell Stock.
//Memory Usage: 93.2 MB, less than 99.26% of C++ online submissions for Best Time to Buy and Sell Stock.
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int mn = INT_MAX;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            mn = min(mn, prices[i]);
            ans = max(ans, prices[i] - mn);
        }

        return ans;
    }
};
int main()
{
    Solution solution;
    vector<int> prices{2, 1, 2, 1, 0, 1, 2};
    cout << solution.maxProfit(prices) << endl;
    return 0;
}