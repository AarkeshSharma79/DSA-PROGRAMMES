class Solution {
public:
    long long maxleft(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        long long left=maxleft(root->left);
        long long right=maxleft(root->right);
        return max((long long)(root->val),max(left,right));
    }
    long long minright(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        long long left=minright(root->left);
        long long right=minright(root->right);
        return min((long long)(root->val),min(left,right));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        else if(root->left==NULL && root->right==NULL) return true;
        long long val1=maxleft(root->left);
        long long val2=minright(root->right);
        if(root->val>val1 && root->val<val2){
             return isValidBST(root->left) &&
                   isValidBST(root->right);
        }
        else return false;
        
    }
};