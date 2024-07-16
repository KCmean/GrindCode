/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

        if (node == nullptr || node->next == nullptr) {
            return;
        }

        node -> val = node -> next -> val;
        ListNode* rotate = node -> next;  
        node -> next = node -> next -> next;

        delete rotate;      

        
    }
};