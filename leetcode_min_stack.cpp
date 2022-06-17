#include <iostream>
#include <stack>
#include <vector>

using namespace std;
//Passed
//Runtime: 26 ms, faster than 72.83% of C++ online submissions for Min Stack.
//Memory Usage: 16.2 MB, less than 92.51% of C++ online submissions for Min Stack.
class MinStack {
public:
 stack<pair<int, int>> st;
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(st.empty())
        {
            st.push({val, val});
        }
        else
        {
            int mini = min(val, st.top().second);
            
            st.push({val, mini});
        }
    }
    
    void pop() {
        
        st.pop();
    }
    
    int top() {
        
        return st.top().first;
    }
    
    int getMin() {
        
        return st.top().second;
    }
};
int main() {
    MinStack* obj = new MinStack();
    int val = 9;
  obj->push(val);
  obj->pop();
  int param_3 = obj->top();
  int param_4 = obj->getMin();
  cout << param_3 << " " << param_4 << endl;
    return 0;
}