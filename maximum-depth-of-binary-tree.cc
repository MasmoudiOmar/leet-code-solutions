class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->right==NULL && root->left==NULL)
            return 1;
        return max(maxDepth(root->right),maxDepth(root->left))+1;
    }
};
