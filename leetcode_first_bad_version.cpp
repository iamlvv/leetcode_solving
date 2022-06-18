#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Passed
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
// Memory Usage: 6 MB, less than 22.66% of C++ online submissions for First Bad Version.
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int mid, l = 1, r = n;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (isBadVersion(mid) && !isBadVersion(mid - 1))
                return mid;
            if (isBadVersion(mid))
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
