/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
//Solved by using a while loop to loop through the linked list
//If the current node and the next node have the same value, set the next node to the next node's next node
//If the current node and the next node have different values, move to the next node

var deleteDuplicates = function(head) {
    var current = head;
    while (current && current.next) {
        if (current.val === current.next.val) {
            current.next = current.next.next;
        } else {
            current = current.next;
        }
    }
    return head;
};
