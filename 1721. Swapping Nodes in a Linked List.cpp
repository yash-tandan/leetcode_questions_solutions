class Solution {
    int getLength(ListNode *head) {
        int ans = 0;
        for (; head; head = head->next) ++ans;
        return ans;
    }
    ListNode *getNode(ListNode *head, int k) {
        while (--k) head = head->next;
        return head;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int len = getLength(head), r = len - k + 1;
        if (r == k) return head;
        ListNode *a = getNode(head, k), *b = getNode(head, r);
        swap(a->val, b->val);
        return head;
    }
};