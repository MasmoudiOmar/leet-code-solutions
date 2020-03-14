class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.empty())
            return {};
        if(nums.size()==1)
            return {nums};
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> m= nums;
            m.erase(m.begin()+i);
            vector<int> result1={nums[i]};
            vector<vector<int>> p= permute(m);
            for(int j=0;j<p.size();j++)
            {
                vector<int> v = result1;
                v.insert(v.end(),p[j].begin(),p[j].end());
                result.push_back(v);
            }
        }
        return result;
    }
};
