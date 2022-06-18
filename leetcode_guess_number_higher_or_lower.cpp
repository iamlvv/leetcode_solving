#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Passed
// Runtime: 5 ms, faster than 8.83% of C++ online submissions for Guess Number Higher or Lower.
// Memory Usage: 6 MB, less than 22.57% of C++ online submissions for Guess Number Higher or Lower.

class Solution
{
public:
    int guessNumber(int n)
    {
        int mid, l = 1, r = n;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (guess(mid) == 0)
                return mid;
            if (guess(mid) == -1)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};

int main()
{
    return 0;
}