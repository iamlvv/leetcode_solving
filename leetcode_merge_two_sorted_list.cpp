#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Passed
//Runtime: 10 ms, faster than 58.27% of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage: 14.9 MB, less than 14.95% of C++ online submissions for Merge Two Sorted Lists.

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
    int array[100];
    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    void bubbleSort(int arr[], int n)
    {
        int i, j;
        bool haveSwap = false;
        for (i = 0; i < n - 1; i++)
        {
            haveSwap = false;
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    haveSwap = true;
                }
            }
            if (haveSwap == false)
            {
                break;
            }
        }
    }
    int count_length_list(ListNode *list)
    {
        int size = 0;
        ListNode *temp = list;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }
    void printlist(ListNode *list)
    {
        ListNode *temp = list;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 == NULL)
            return NULL;
        else if (list1 == NULL && list2 != NULL)
            return list2;
        else if (list1 != NULL && list2 == NULL)
            return list1;
        ListNode *temp = list1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = list2;
        ListNode *head1 = list1;
        int index = 0;
        while (head1 != NULL)
        {
            array[index] = head1->val;
            index += 1;
            head1 = head1->next;
        }
        bubbleSort(array, index);
        ListNode *result = list1;
        int size = count_length_list(result);

        for (int i = 0; i < size; i++)
        {
            result->val = array[i];
            result = result->next;
        }
        return list1;
    }
};
int main()
{
    Solution result;
    // string s = "{[(])}";
    // cout << result.isValid(s) << endl;
    return 0;
}