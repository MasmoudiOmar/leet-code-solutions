class Solution {
public:
    bool Sym(TreeNode* p , TreeNode* q){
        if(p==NULL||q==NULL)
            return p==q;
        if((p->right==NULL && p->left==NULL)&&(q->right==NULL && q->left==NULL))
            return p->val==q->val;
        if(p->val==q->val)
            return Sym(p->left,q->right)&&Sym(p->right,q->left);
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return Sym(root->left,root->right);
    }
};
