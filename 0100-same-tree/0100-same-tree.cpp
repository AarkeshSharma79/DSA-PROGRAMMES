class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if((p==NULL && q!=NULL)||(p!=NULL&&q==NULL)) return false;
        if(p->val!=q->val) return false;
       bool t=isSameTree(p->left,q->left);
        if(t==false) return false;
        bool f =isSameTree(p->right,q->right);
        if(f==false) return false;
        return true;

    }
};