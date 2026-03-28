class Solution {
public:
    ListNode* reverse(ListNode* c)
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
      while(temp!=NULL)
      {
        ListNode* b=new ListNode(temp->val);
        tempc->next=b;
        tempc=b;
        temp=temp->next;
      }
      c=reverse(c->next);
      temp=head;
      tempc=c;
      while(tempc){
        if(tempc->val!=temp->val) return false;
        temp=temp->next;
        tempc=tempc->next;
      }
      return true;

    }
};