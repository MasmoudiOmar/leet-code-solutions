class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root==NULL)
            return 0;
        if(root->right && root->left)
            return min(minDepth(root->left)+1,minDepth(root->right)+1);
        if(root->right)
            return minDepth(root->right)+1;
        if(root->left)
            return minDepth(root->left)+1;
        return 1; // this so if it doesn't have right or left it returns there's a root node
    }
};
