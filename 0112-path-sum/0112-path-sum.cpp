class Solution {
public:
bool helper(TreeNode* root, int tsum) {

    if(root == NULL)
        return false;
    if(root->left == NULL && root->right == NULL)
        return tsum == root->val;
    tsum = tsum - root->val;
    return helper(root->left, tsum)||
           helper(root->right, tsum);
}
    bool hasPathSum(TreeNode* root, int tsum) {
        return helper(root,tsum);
    }
};