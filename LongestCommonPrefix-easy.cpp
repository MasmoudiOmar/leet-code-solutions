class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s, result;
        int m= INT_MAX;
        for(int i=0;i<strs.size();i++)
            if(strs[i].length()<m)
            {
                m=strs[i].length();
                s=strs[i];
            }
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=s[i])
                    return result;
            }
            result+=s[i];
        }
        return result;
    }
};
