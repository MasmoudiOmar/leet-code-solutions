class Solution {
public:
    char inverse (char c)
    {
       if (c=='{')
           return '}';
        if(c=='(')
            return ')';
        if(c=='[')
            return ']';
        return 'c';
    }
public:
    bool isValid(string s) {
        stack <char> st;
        if(s.length()%2==1)
            return false;
        if (s.length()==0)
            return true;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='{'|| s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(s[i]==inverse(st.top()))
                    st.pop();
                else
                    return false;
 
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
