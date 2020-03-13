class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()== 0)
            return 0;
        if (needle.length()>haystack.length())
            return -1;
        int j;
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                for(j=1;j<needle.length();j++)
                {
                    if (haystack[j+i]!=needle[j])
                        break;
                }
                if (j==needle.length())
                    return i;
            }
        }
        return -1;
    }
};
