#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// Passed
// Runtime: 314 ms, faster than 45.56% of C++ online submissions for Palindrome Linked List.
// Memory Usage: 132.6 MB, less than 5.56% of C++ online submissions for Palindrome Linked List.
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
    bool isPalindrome(ListNode *head)
    {
        vector<int> result;
        ListNode *temp = head;
        while (temp != nullptr)
        {
            result.push_back(temp->val);
            temp = temp->next;
        }
        vector<int> result2 = result;
        reverse(result2.begin(), result2.end());
        if (result2 == result)
            return true;
        return false;
    }
};