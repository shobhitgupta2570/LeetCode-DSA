class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;

        // Step 1: Find length and tail
        int n = 1;
        ListNode* tail = head;
        while(tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: Make it circular
        tail->next = head;

        // Step 3: Find new tail (n - k % n - 1 steps from head)
        int steps = n - (k % n);
        ListNode* newTail = head;
        for(int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // Step 4: Break the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
