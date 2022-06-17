#include <iostream>
#include <string>
#include <stack>
using namespace std;
//Passed
//Runtime: 5 ms, faster than 17.45% of C++ online submissions for Valid Parentheses.
//Memory Usage: 6.4 MB, less than 51.78% of C++ online submissions for Valid Parentheses.

class Solution
{
public:
    bool isValid(string s)
    {
        int count1 = 0, count2 = 0, count3 = 0;
        stack<char> array;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                count1++;
                array.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (count1 == 0)
                    return false;
                count1--;
                if (array.top() == '(')
                    array.pop();
            }
            else if (s[i] == '[')
            {
                count2++;
                array.push(s[i]);
            }
            else if (s[i] == ']')
            {
                if (count2 == 0)
                    return false;
                count2--;
                if (array.top() == '[')
                    array.pop();
            }
            else if (s[i] == '{')
            {
                count3++;
                array.push(s[i]);
            }
            else if (s[i] == '}')
            {
                if (count3 == 0)
                    return false;
                count3--;
                if (array.top() == '{')
                    array.pop();
            }
        }
        if (array.size() == 0)
            return true;
        return false;
    }
};

int main()
{
    Solution result;
    string s = "{[(])}";
    cout << result.isValid(s) << endl;
    return 0;
}