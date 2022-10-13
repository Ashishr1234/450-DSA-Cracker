class Solution {
public:
    bool check(TreeNode* root,long long mx,long long mn){
        if(!root) return true;
        return root->val<mx && root->val>mn && check(root->left,root->val,mn) && check(root->right,mx,root->val);
    }
    bool isValidBST(TreeNode* root) {
        return check(root,1e18,-1e18);
    }
};
