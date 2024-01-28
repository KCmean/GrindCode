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
private:
     int getLength(ListNode* head) {

    int length = 0;

    ListNode* temp =head;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }

    return length;
    }
private:
   
    ListNode* reverseK(ListNode* &head, int k, int length) {
        
    //Base case
    if(head == NULL || head -> next == NULL || k == 1 || length < k)
        return head;
    
    //Step 1 : Reverse first k nodes
    ListNode* nxt = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;

    int count = 1;

    while(curr != NULL && count <= k) {

        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }

    //Step 2 : Reverse next k nodes using recursion
    if(nxt != NULL) { 
        head -> next = reverseK(nxt, k, (length - k));
    }

    //Step 3 : Return head of the reversed linked list
    head = prev;
    
    return head;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
//        if(head == NULL || k == 1) {
//             return head;
//         }
        
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* forward = NULL;
        
//         int cnt = 0;
        
//         while(curr!=NULL && cnt < k){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//             cnt++;
//         }
//         if(forward != NULL){
//             head -> next = reverseKGroup(forward,k);
//         }
//         return prev;
        
    int len = getLength(head);
    
    return reverseK(head, k, len);
        
    }
};