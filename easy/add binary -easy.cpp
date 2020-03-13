class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int al=a.length()-1;
        int bl=b.length()-1;
        int carry=0;
        do
        {
            int i=(a[al]-'0')^(b[bl]-'0')^carry;
            result=to_string(i)+result;
            carry=(((a[al]-'0')&(b[bl]-'0'))|((a[al]-'0')&carry)|(carry&(b[bl]-'0')));
            al--;
            bl--;
        }
        while(bl>=0&& al>=0);
        if(al>=0)
        {
            do
            {
                int i=(a[al]-'0')^carry;
                result=to_string(i)+result;
                carry=(a[al]-'0')&carry;
                al--;
            }
            while(al>=0);
        }
        if(bl>=0)
        {
            do
            {
                int i=(b[bl]-'0')^carry;
                result=to_string(i)+result;
                carry=(b[bl]-'0')&carry;
                bl--;
            }
            while(bl>=0);
        }
        if(al<0&&bl<0&&carry)
            result=to_string(1)+result;
        return result;
    }
};
