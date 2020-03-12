class Solution {
public:
    vector<int> NodesToInts(vector<TreeNode*> n){
        vector<int> v;
        if (n.empty())
            return {};
        for(TreeNode* m : n)
            v.push_back(m->val);
        return v;
    }
    vector<TreeNode*> NodesToLR(vector<TreeNode*> n)
    {
        vector<TreeNode*> T;
        if(n.empty())
            return {};
        for(int i=0;i<n.size();i++)
        {
            if(n[i]->left)
            T.push_back(n[i]->left);
            if(n[i]->right)
            T.push_back(n[i]->right);
        }
        return T;
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        if(!root->left&&!root->right)
            return {{root->val}};
        vector<TreeNode*> v;
        v={root};
        for(TreeNode* m : NodesToLR(v))
        {
            cout<<m->val<<endl;
        }
        vector<vector<int>> n;
        n.push_back({root->val});
            while(!NodesToLR(v).empty())
            {
                v=NodesToLR(v);
                n.insert(n.begin(),NodesToInts(v));
            }
        return n;
    }
};
