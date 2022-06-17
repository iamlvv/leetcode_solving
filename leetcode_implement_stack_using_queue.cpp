#include <iostream>
#include <queue>

using namespace std;
//Passed
//Runtime: 7 ms, faster than 9.61% of C++ online submissions for Implement Stack using Queues.
//Memory Usage: 6.9 MB, less than 55.42% of C++ online submissions for Implement Stack using Queues.
class MyStack
{
public:
    queue<int> q1;

    MyStack()
    {
    }

    void push(int x)
    {
        int sz = q1.size();
        q1.push(x);
        while (sz--)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop()
    {
        int res = top();
        q1.pop();
        return res;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
int main()
{
    return 0;
}