class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* slow=head;
       ListNode* fast=head;
       bool flag=false;
       while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) {
            flag=true;
            break;
        }
    }
        ListNode* temp=head;
        if(flag==false) return NULL;
        while(temp!=slow)
        {
            slow=slow->next;
            temp=temp->next;
        }
       return temp;
    }
};