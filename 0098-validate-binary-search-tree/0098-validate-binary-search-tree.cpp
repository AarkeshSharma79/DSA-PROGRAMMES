class Solution {
public:
    void inorderTraversal(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorderTraversal(root->left,ans);
        ans.push_back(root->val);
        inorderTraversal(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorderTraversal(root,ans);
        for (int i = 1; i < ans.size(); i++) {
        if (ans[i] <= ans[i - 1]) {
            return false;
        }
    }
    return true;
    }
};