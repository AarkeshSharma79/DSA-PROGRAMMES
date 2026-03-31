class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = NULL;
        while (curr != NULL) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL &&
               fast->next->next != NULL) // left middle for even length;
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL; // for the breaking lists
        // merge the list  a and b alernatively
        ListNode* c = new ListNode(0);
        ListNode* tc = c;
        ListNode* ta = a;
        ListNode* tb = b;
        while (ta != NULL && tb != NULL) {
            tc->next = ta;
            ta = ta->next;
            tc = tc->next;

            tc->next = tb;
            tb = tb->next;
            tc = tc->next;
        }
        tc->next = ta;
        head=c->next;
    }
};