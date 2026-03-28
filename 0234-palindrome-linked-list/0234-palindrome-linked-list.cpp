class Solution {
public:
// reverse the copy list;
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
      ListNode* c=new ListNode(0);
      ListNode* tempc=c;
      ListNode* temp=head;

      // formation of copy list of original list;
      while(temp!=NULL) // tc O(n) and SC O(n)
      {
        ListNode* b=new ListNode(temp->val);
        tempc->next=b;
        tempc=b;
        temp=temp->next;
      }
      c=reverse(c->next);
      temp=head;
      tempc=c;
      // compare both original list and copy list value'
      while(tempc){ // Tc O(n)
        if(tempc->val!=temp->val) return false;
        temp=temp->next;
        tempc=tempc->next;
      }
      return true;

    }
};