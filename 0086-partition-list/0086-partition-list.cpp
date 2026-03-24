class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
       ListNode* lo=new ListNode(0);
       ListNode* hi= new ListNode(1);
       ListNode* tl=lo;
       ListNode* th=hi;
       ListNode* t= head;
       while(t!=NULL){
        if(t->val<x){
            tl->next=t;
            t=t->next;
            tl=tl->next;}
            else{
                th->next=t;
                t=t->next;
                th=th->next;
            }
        }
        tl->next=hi->next;
        th->next=NULL;
        return lo->next;
        
    }
};