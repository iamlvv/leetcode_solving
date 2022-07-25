#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
//Passed
//Runtime: 15 ms, faster than 75.66% of C++ online submissions for Delete Node in a Linked List.
//Memory Usage: 7.7 MB, less than 39.02% of C++ online submissions for Delete Node in a Linked List.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};