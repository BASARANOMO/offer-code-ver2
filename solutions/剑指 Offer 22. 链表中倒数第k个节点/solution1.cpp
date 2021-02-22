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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        stack<ListNode*> stk;
        while (head) {
            stk.push(head);
            head = head->next;
        }
        while (k > 1) {
            k -= 1;
            stk.pop();
        }
        return stk.top();
    }
};