#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 10 ms, faster than 41.77% of C++ online submissions for Reverse Linked List.
// Memory Usage: 8.4 MB, less than 20.63% of C++ online submissions for Reverse Linked List.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        vector<int> result;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            result.push_back(temp->val);
            temp = temp->next;
        }
        ListNode *temp2 = head;
        int i = 0;
        while (temp2 != nullptr)
        {
            temp2->val = result[i];
            i++;
            temp2 = temp2->next;
        }
        return head;
    }
};