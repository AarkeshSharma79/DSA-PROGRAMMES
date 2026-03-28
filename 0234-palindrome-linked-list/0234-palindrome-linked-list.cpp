class Solution {
public:
     ListNode* reverse(ListNode* c)// Tc O(n)
    {
        ListNode *prev=NULL, *curr=c, *Next=c;
        while(curr!=NULL){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // if the first and second half of list is the reverse of each other then it is the palindrome linked list
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL ) // left middle for even length;
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead=reverse(slow->next);
        ListNode* b=newHead;
        ListNode* a=head;
        while(b!=NULL){
            if(a->val!=b->val) return false;

            a=a->next;
            b=b->next;
        }
        return true;
    }
};