#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
//Passed
//Runtime: 3 ms, faster than 45.59% of C++ online submissions for Implement Queue using Stacks.
//Memory Usage: 7 MB, less than 89.46% of C++ online submissions for Implement Queue using Stacks.
class MyQueue
{
public:
    stack<int> s1, s2;

    MyQueue()
    {
        s1 = stack<int>();
        s2 = stack<int>();
    }

    void push(int x)
    {

        s1.push(x);
    }

    int pop()
    {

        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int temp = s2.top();
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }

    int peek()
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int temp = s2.top();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }

    bool empty()
    {
        if (s1.empty())
            return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
}