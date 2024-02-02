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
    ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

private:
    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while (left && right) {
            if (left->val < right->val) {
                temp->next = left;
                temp = left;
                left = left->next;
            } else {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        while (left) {
            temp->next = left;
            temp = left;
            left = left->next;
        }

        while (right) {
            temp->next = right;
            temp = right;
            right = right->next;
        }

        ans = ans -> next;

        return ans;
    }

public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* mid = findMid(head);

        ListNode* left = head;
        ListNode* right = mid->next;

        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);

        return result;
    }
};