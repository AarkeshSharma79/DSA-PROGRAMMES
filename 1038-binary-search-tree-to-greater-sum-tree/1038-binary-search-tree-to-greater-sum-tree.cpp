class Solution {
public:
    int sum=0;
    void reverseInorder(TreeNode* root){
        // we know that inorder LROOTR
        // but reverseinoder RROOTL;
        if(root==NULL)return;
        reverseInorder(root->right);
        root->val+=sum;
        sum=root->val;
        reverseInorder(root->left);

    }
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};