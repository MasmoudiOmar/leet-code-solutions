class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL||q==NULL)
            return p==q;
        if((p->right==NULL && p->left==NULL)&&(q->right==NULL && q->left==NULL))
            return p->val==q->val;
        if(p->val==q->val)
            return isSameTree(p->right,q->right)&&isSameTree(p->left,q->left);
        return false;
    }
};
