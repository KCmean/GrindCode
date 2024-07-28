/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy = new ListNode(0,head);
        ListNode* first = dummy;
        ListNode* second = dummy;

        for(int i = 0; i <= n; i++){
            first = first -> next;
        }
        while( first != NULL){
            first = first -> next;
            second = second -> next;
        }

        ListNode* temp = second -> next;
        second -> next = second ->next -> next;
        delete temp;

        ListNode* og = dummy -> next;
        delete dummy;

        return og;

        return head;
    }
};