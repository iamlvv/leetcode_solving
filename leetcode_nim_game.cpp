#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Nim Game.
//Memory Usage: 5.9 MB, less than 66.24% of C++ online submissions for Nim Game.
class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0;
    }
};

int main() {
    Solution solution;
    cout << solution.canWinNim(2) << endl;
    return 0;
}