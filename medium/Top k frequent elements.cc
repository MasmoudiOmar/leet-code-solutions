class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto i : nums)
            umap[i]++;
        priority_queue <pair<int,int>> p;
        for(auto v : umap)
        {
            p.push({v.second,v.first});
        }
        vector<int> result;
        while(k--)
        {
            result.push_back(p.top().second);
            p.pop();
        }
        return result;
    }
};
