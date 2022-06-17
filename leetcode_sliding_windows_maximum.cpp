#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
// Passed
// Runtime: 288 ms, faster than 93.66% of C++ online submissions for Sliding Window Maximum.
// Memory Usage: 134.7 MB, less than 46.27% of C++ online submissions for Sliding Window Maximum.
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {

        // Double Ended Queue
        deque<int> dq;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {

            // is size is greater than window remove the front element
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // if there is something in the deque which is less than the current num, remove it
            // As element grater than it has came in the window so it is of no use now
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // add the current element in the deque
            dq.push_back(i);

            // window starts from i = 2 and front of deque will contain max num of the window
            // the numbers in deque are in decreasing order
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};
int main()
{
    vector<int> nums{1, -1};
    int k = 3;
    vector<int> result;
    Solution solution;
    result = solution.maxSlidingWindow(nums, 1);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}