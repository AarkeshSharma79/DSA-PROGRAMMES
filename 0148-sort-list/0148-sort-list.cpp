class Solution {
public:
    ListNode* sortList(ListNode* head) {
     ListNode* fast=head;
     ListNode* slow=head;
     ListNode* b;
     // middle of list for the odd number of node are present
     //left middle of list for the even number of node are present 
     if(head==NULL || head->next==NULL) return head;
     while(fast->next!=NULL&& fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
     }
        b=slow->next;
        slow->next=NULL;
        ListNode* a=head;
        // sort the break list 
        a=sortList(a);
        b=sortList(b);
        // merge list 
        ListNode* c=new ListNode(100);
        ListNode* temp=c;
        while(a!=NULL && b!=NULL){
            if(a->val<b->val){
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL) temp->next=b;
        else temp->next=a;
        return c->next;
    }
};