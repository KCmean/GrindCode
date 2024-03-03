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


        //index from front to be removed 
        int count = 0;
        ListNode* temp = head;

        while(temp){
            count++;
            temp = temp->next;
        }


        if(n >= count){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        int targetIndex = count - n;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        for (int i = 0; i < targetIndex; i++) {
            prev = curr;
            curr = curr->next;
        }

        if(prev){
            prev -> next = curr -> next;
        }else{
            ListNode* newHead = head -> next;
            return newHead;
        }





        // for(int i = 0; i < count; i++){
        //     if(i == count - n){
        //         prev -> next = curr -> next -> next;
        //         curr -> next = NULL;
        //     }
        //     else{
        //         prev = curr;
        //         curr = curr -> next;
        //     }
        // }

        return head;
    }
};