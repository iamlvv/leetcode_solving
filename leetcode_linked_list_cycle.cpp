#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 3 ms, faster than 99.95% of C++ online submissions for Linked List Cycle.
//Memory Usage: 8 MB, less than 57.28% of C++ online submissions for Linked List Cycle.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return false;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast != NULL && fast->next != NULL)
        {
            if (slow == fast)
                return true;
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};

int main()
{
    return 0;
}