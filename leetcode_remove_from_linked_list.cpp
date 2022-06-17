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
    ListNode *removeElements(ListNode *head, int val)
    {
        vector<int> array;
        if (head == NULL)
            return NULL;
        ListNode *node = head;
        while (node != NULL)
        {
            if (node->val != val)
                array.push_back(node->val);
            node = node->next;
        }
        if (array.size() == 0)
            return NULL;
        else
        {
            for (int i = 0; i < array.size(); i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
            int index = 0;
            cout << array.size() << endl;
            ListNode *temp = new ListNode(array[0]);
            for (int i = 1; i < array.size(); i++)
            {
                addNode(temp, array[i]);
            }
            return temp;
        }
        return NULL;
    }
};

int main()
{
    ListNode *head;
    Solution solution;
    solution.addNode(head, 1);
    solution.addNode(head, 2);
    solution.addNode(head, 3);
    solution.addNode(head, 6);
    solution.addNode(head, 5);
    solution.addNode(head, 4);
    solution.addNode(head, 6);
    ListNode *new_head = solution.removeElements(head, 6);
    ListNode *run = new_head;
    while (run != NULL)
    {
        cout << run->val << " ";
    }
    return 0;
}