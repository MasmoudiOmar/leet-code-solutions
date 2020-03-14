/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->right==NULL && root->left==NULL)
            return 1;
        return max(maxDepth(root->right),maxDepth(root->left))+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(!root->right&&!root->left)
            return true;
        if(abs(maxDepth(root->right)-maxDepth(root->left))<=1)
            return (isBalanced(root->right)&&isBalanced(root->left));
        else
            return false;
    }
};
