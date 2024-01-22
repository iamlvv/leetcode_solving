#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int solution(string &S);

int main()
{
    string temp = "{()()]}";
    cout << solution(temp) << endl;
    return 0;
}

int solution(string &S)
{
    stack<char> temp;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '(' || S[i] == '[' || S[i] == '{')
        {
            temp.push(S[i]);
        }
        else
        {
            if (temp.empty())
            {
                return 0;
            }
            else
            {
                if (S[i] == ')' && temp.top() == '(')
                {
                    temp.pop();
                }
                else if (S[i] == ']' && temp.top() == '[')
                {
                    temp.pop();
                }
                else if (S[i] == '}' && temp.top() == '{')
                {
                    temp.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
    }
    return temp.empty() ? 1 : 0;
}