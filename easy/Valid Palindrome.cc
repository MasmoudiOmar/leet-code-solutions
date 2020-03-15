class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="")return true;
        bool result = true;
        int start=0;
        int end=s.length()-1;
        while(end>start)
        {
            if((s[end]<'0' || s[end]>'9')&& (s[end]<'a'||s[end]>'z')&&(s[end]<'A'||s[end]>'Z'))
            {
                end--;
                continue;
            }
            if((s[start]<'0' || s[start]>'9') && (s[start]<'a'||s[start]>'z')&&(s[start]<'A'||s[start]>'Z'))
            {
                start++;
                continue;
            }
            if(tolower(s[end])==tolower(s[start]))
            {
                result=true;
                end--;
                start++;
            }
            else
            {
                result=false;
                break;
            }
        }
        return result;
    }
};
