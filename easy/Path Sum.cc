class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root&& sum>=0)
            return false;
        if(root->right&& root->left)
            return hasPathSum(root->right , sum- root->val)||hasPathSum(root->left , sum- root->val);
        if(root->right)
            return hasPathSum(root->right , sum- root->val);
        if(root->left)
            return hasPathSum(root->left , sum- root->val);
        if(!root->right&&!root->left&&root->val!=sum)
            return false;
        if(!root->right&&!root->left&&root->val==sum)
            return true;
        return false;
    }
};
