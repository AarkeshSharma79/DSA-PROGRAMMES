/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        if(head->next==NULL) return NULL;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        temp=head;
        ListNode* Q=head->next;
        if(len%2!=0)
        {
            for(int i=1;i<len/2;i++)
            {
                Q=Q->next;
                temp=temp->next;
            }
            temp->next=Q->next;
            return head;
        }
        else{
             for(int i=1;i<len/2;i++)
            {
                Q=Q->next;
                temp=temp->next;
            }
            temp->next=Q->next;
            return head;
        }
    }
};