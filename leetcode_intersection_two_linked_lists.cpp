#include <iostream>
#include <vector>
using namespace std;
//Passed
//Runtime: 699 ms, faster than 7.12% of C++ online submissions for Intersection of Two Linked Lists.
//Memory Usage: 14.7 MB, less than 31.71% of C++ online submissions for Intersection of Two Linked Lists.
struct ListNode {
int val;
ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    vector<int>array1;
    vector<int>array2;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
		
        while(temp1 != NULL){
            while(temp2 != NULL){
                if(temp1 == temp2 && temp1 != NULL){
                    return temp1;
                }
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
            temp2=headB;
        }
        return NULL;
    }
};