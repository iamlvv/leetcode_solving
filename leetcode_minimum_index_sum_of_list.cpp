#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>result;
        vector<int>array;
        int min = 9999999;
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] == list2[j]) {
                    int temp = i + j;
                    if (temp < min) {
                        min = temp;
                        if (array.empty()) array.push_back(i);
                        else {
                            array.pop_back();
                            array.push_back(i);
                            result.push_back(list1[array[i]]);
                        }
                    }
                    else if (temp == min) {
                        array.push_back(i);
                        result.push_back(list1[array[i]]);
                    }
                }

            }
        }
        return result;
    }
};

int main() {
    vector<string>list1 {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string>list2 {"KFC","Burger King","Tapioca Express","Shogun"};
    Solution solution;
    vector<string>result = solution.findRestaurant(list1, list2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] ;
    }
    return 0;
}