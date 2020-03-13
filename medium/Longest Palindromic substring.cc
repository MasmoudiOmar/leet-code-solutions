#include <string>
class Solution {
public:
    string longestPalindrome(string s) {
        /* ===Brute Force===
        string result="";
        int m=s.length();
        for (int i = 0; i < m; i++)  
            for (int len = 1; len <= m - i; len++)
            {
                string t = s.substr(i,len);
                if(result.length()>=t.length())
                    continue;
                int h=0;
                int n=t.length()-1;
                while(n>h)
                {
                    if(t[n]!=t[h])
                        break;
                    n--;
                    h++;
                }
                if(h>=n)
                    result=t;
            }
        return result;
    }
    */
    int n = s.size();
        if (n==0)
            return "";
    bool table[n][n]; 
      
    memset(table, 0, sizeof(table)); 
    int maxLength = 1; 
      
    for (int i = 0; i < n; ++i) 
        table[i][i] = true; 
   
    int start = 0; 
    for (int i = 0; i < n-1; ++i) 
    {
        if (s[i] == s[i+1]) 
        { 
            table[i][i+1] = true; 
            start = i; 
            maxLength = 2; 
        } 
    }
    for (int k = 3; k <= n; ++k) 
    {
        for (int i = 0; i < n-k+1 ; ++i) 
            { 
                int j = i + k - 1; 
                if (table[i+1][j-1] && s[i] == s[j]) 
                { 
                    table[i][j] = true; 
  
                if (k > maxLength) 
                { 
                    start = i; 
                    maxLength = k; 
                } 
                } 
            }
    }
    return s.substr(start, maxLength);
    }
};
