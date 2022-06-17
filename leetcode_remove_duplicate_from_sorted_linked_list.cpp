#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
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
    bool checkduplicate(vector<int> &nums, int val)
    {
        bool check = true;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
                return false;
        }
        return check;
    }
    void addNode(ListNode *node, int val)
    {
        ListNode *temp = new ListNode(val);
        if (node == NULL)
        {
            node = temp;
            node->next = NULL;
        }
        else
        {
            node->next = temp;
            node->next->next = NULL;
        }
    }
    ListNode *deleteDuplicates(ListNode *head)
    {
        vector<int> array;
        ListNode *temp = head;
        if (head == nullptr) return nullptr;
        while (temp != NULL)
        {
            if (checkduplicate(array, temp->val))
                array.push_back(temp->val);
            temp = temp->next;
        }
        if (array.size() == 0) return NULL;
        ListNode *new_head = new ListNode(array[0]);
        for (int i = 1; i < array.size(); i++)
        {
            addNode(new_head, array[i]);
        }
        return new_head;
    }
};

int main()
{
    Solution solution;
    ListNode *new_head;
    solution.addNode(new_head, 1);
    solution.addNode(new_head, 1);
    solution.addNode(new_head, 2);
    // solution.addNode(new_head, 3);
    // solution.addNode(new_head, 3);
    ListNode *result = solution.deleteDuplicates(new_head);
    ListNode *run = result;
    while (run != NULL)
    {
        cout << run->val << " ";
        run = run->next;
    }
    return 0;
}