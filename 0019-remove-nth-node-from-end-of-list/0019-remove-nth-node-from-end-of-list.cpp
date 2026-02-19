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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n==len){// if one length is list is present
            head=head->next;
            return head;
        }
        // nth from end=(len-n+1)th from start
        int m=len-n+1;
        int idx=m-1;// the idx to be deleted from list
        ListNode* del=head;
        for(int i=1;i<=idx-1;i++)
        {
            del=del->next;
        }
        del->next=del->next->next;
        return head;
    }
};