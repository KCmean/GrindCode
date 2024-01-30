class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> counter; 
        ListNode* curr = head;

        while (curr) {
            counter[curr->val]++;
            curr = curr->next;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        for (auto it = counter.begin(); it != counter.end(); ++it) {
            if (it->second == 1) {
                temp->next = new ListNode(it->first);
                temp = temp->next;
            }
        }

        return dummy->next;
    }
};
