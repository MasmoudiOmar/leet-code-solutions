class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxS = -1;
        vector<int> position(265,-1);
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(position[s[i]]!=-1)
            {
                maxS=max(maxS,i-start);
                start=position[s[i]]+1;
                i=position[s[i]];
                position.clear();
                position.resize(265,-1);
                continue;
            }
            position[s[i]]=i;
        }
        maxS = max(maxS, (int)s.size() - start);
        return maxS;
    }
};
