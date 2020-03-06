class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.length();
        int res=0;
        while(l--)
        {
            if(s[l]==' '&&res>0)
                break;
            if(s[l]==' ')
                continue;
            res++;
        }
        return res;
    }
};
