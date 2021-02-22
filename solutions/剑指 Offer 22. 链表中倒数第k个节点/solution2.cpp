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
        // two pointers
        ListNode* former = head;
        ListNode* latter = head;
        while (k > 0) {
            former = former->next;
            k -= 1;
        }
        while (former) {
            former = former->next;
            latter = latter->next;
        }
        return latter;
    }
};