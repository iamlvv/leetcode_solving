#include <iostream>
#include <math.h>
using namespace std;
//Passed
//Runtime: 92 ms, faster than 7.24% of C++ online submissions for Sum of Square Numbers.
//Memory Usage: 6 MB, less than 7.98% of C++ online submissions for Sum of Square Numbers.
class Solution {
public:
    bool perfectsquare (int x) {
        long double n = sqrt(x);
        return ((n - floor(n)) == 0);
    }
    bool judgeSquareSum(int c) {
        if (c == 0) return true;
        int b = 0;
        for (int i = 0; i < ceil(sqrt(c)); i++) {
            b = c - i * i;
            if (perfectsquare(b)) return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    cout << solution.judgeSquareSum(5) << endl;
    return 0;
}