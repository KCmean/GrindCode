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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, bool> visited;
        
        int index = 0;
        while(head){
            if(visited[head] == true){
                return head;
            }

            visited[head] = true;
            head = head -> next;
            index++;
        }

        return NULL;
        
    }
};