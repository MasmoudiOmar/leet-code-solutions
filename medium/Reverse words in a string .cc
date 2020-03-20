class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string result="";
        while(i>=0)
        {
            while(i>=0 && s[i]==' ')
            {
                i--;
            }
            if(i<0)break;
            int j=i;
            while(j>=0 && s[j]!=' ')
                j--;
            j++;
            result+=s.substr(j,i-j+1);
            i=j;
            i--;
            while(i>=0 && s[i]==' ')
                i--;
            if(i==-1)return result;
            result+=" ";
        }
        return result;
    }
};
