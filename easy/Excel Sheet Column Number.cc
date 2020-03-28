class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0, n = s.length()-1;
        for(int i = 0; i <= n; i++)
        ans = ans + pow(26,n-i)*(int(s[i])-64);
        return ans;
    }
};
