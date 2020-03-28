class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*unordered_map<int,int> m;
        for(auto c : nums)m[c]++;
        for(auto n : m)if(n.second == 1) return n.first;
        return 0;*/
        int b = 0;
        for(auto c : nums) b^=c;
        return b;
    }
};
