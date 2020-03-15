class Solution {
public:
    int myAtoi(string str) {
        if(str=="")return 0;
        int i=0;
        while(str[i]==' '&& i<str.length())
        {
            i++;
        }
        if(i==str.length())return 0;
        str=str.substr(i,str.length()-i);
        int negative = 1;
        int start =0;
        if(str[start]=='-')
        {
            negative=-1;
            start++;
        }
        else
            if(str[start]=='+')
        {
            start++;
        }
        if(str[start]-'0'< 0 || str[start]-'0'>9)
            return 0;
        long int result = 0;
        int max = INT_MAX;
        int min = INT_MIN;
        cout<<start;
        while(str[start]-'0'>= 0 && str[start]-'0'<=9 && start<str.length())
        {
            result=result*10+(str[start]-'0');
            start++;
            if(negative*result>max)
                return max;
            if(negative*result<min)
                return min;
        }
        return negative*result;
    }
};
