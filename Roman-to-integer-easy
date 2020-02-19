class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        for(int i=0; i<s.length();i++)
        {
            if(s[i]=='M')
            {
                result+=1000;
            }
            if(s[i]=='D')
            {
                result+=500;
            }
            if(s[i]=='C')
            {
                if(i+1<s.length()&& (s[i+1]=='M'))
                {
                    result+=900;
                    i++;
                    continue;
                }
                if(i+1<s.length()&&s[i+1]=='D')
                {
                    result+=400;
                    i++;
                    continue;
                }
                result+=100;
            }
            if(s[i]=='L')
            {
                result+=50;
            }
            if(s[i]=='X')
            {
                if(i+1<s.length()&& (s[i+1]=='C'))
                {
                    result+=90;
                    i++;
                    continue;
                }
                if(i+1<s.length()&&s[i+1]=='L')
                {
                    result+=40;
                    i++;
                    continue;
                }
                result+=10;
            }
            if(s[i]=='V')
            {
                result+=5;
            }
            if(s[i]=='I')
            {
                if(i+1<s.length()&& (s[i+1]=='X'))
                {
                    result+=9;
                    i++;
                    continue;
                }
                if(i+1<s.length()&&s[i+1]=='V')
                {
                    result+=4;
                    i++;
                    continue;
                }
                result+=1;
            }
            
        }
         return result;
    }
   
};
