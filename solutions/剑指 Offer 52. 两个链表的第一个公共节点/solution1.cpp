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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        ListNode* currA = headA;
        ListNode* currB = headB;
        while (true) {
            if (currA == currB) return currA;
            if (currA->next == nullptr && currB->next == nullptr) return NULL;
            currA = currA->next ? currA->next : headB;
            currB = currB->next ? currB->next : headA;
        }
    }
};
