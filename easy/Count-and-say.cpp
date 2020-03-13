class Solution {
public:
    string countAndSay(int n) {
        int i=0;
        if (n==1)
            return "1";
        string s="1";
        while(i<n-1)
        {
            string s1="";
            int l =0;
            while(l<s.length())
            {
                char c=s[l];
                int j=l;
                int counter=0;
                while(j<s.length()&&s[j]==c)
                {
                    counter++;
                    l++;
                    j++;
                }
                s1+=to_string(counter)+c;
                counter=0;
            }
            s=s1;
            i++;
        }
        return s;
    }
};
