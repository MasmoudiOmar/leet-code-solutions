
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
    TreeNode* helpme(vector<int>& v , int left , int right){
        if(left>right)
            return NULL;
        int mid= left + (right-left)/2;
        TreeNode* p = new TreeNode(v[mid]);
        p->left= helpme(v,left,mid-1);
        p->right= helpme(v,mid+1,right);
        return p;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        return helpme(nums,0,nums.size()-1);
    }
};
