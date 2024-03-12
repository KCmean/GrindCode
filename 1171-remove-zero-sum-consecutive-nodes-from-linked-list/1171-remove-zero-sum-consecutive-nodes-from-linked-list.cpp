class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummyHead = new ListNode(0, head);
        std::unordered_map<int, ListNode*> lastSeenPrefixSum;
        ListNode* current = dummyHead;
        int prefixSum = 0;

        while (current) {
            prefixSum += current->val;
            lastSeenPrefixSum[prefixSum] = current;
            current = current->next;
        }

        prefixSum = 0;
        current = dummyHead;

        while (current) {
            prefixSum += current->val;
            current->next = lastSeenPrefixSum[prefixSum]->next;
            current = current->next;
        }

        // Return the next element of the dummy head which would be the new list head
        return dummyHead->next;
    }
};
