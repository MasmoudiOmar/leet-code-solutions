class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n==0)
            return {};
        if(n==1)
            return {"()"};
        vector<string> result;
        for(int i=1;i<n/2+1;i++)
        {
            vector<string> m = generateParenthesis(n-i);
            vector<string> d = generateParenthesis(i);
            string prev="";
            string next="";
            for(int j=0;j<i;j++)
            {
                prev+="(";
                next+=")";
            }
            for(string s : m)
                    result.push_back(prev+s+next);
            for(string s : m)
                for(string c : d)
                {
                    result.push_back(s+c);
                    result.push_back(c+s);
                }
        }
        sort( result.begin(), result.end() );
        result.erase( unique( result.begin(), result.end() ), result.end() );
        return result;
    }
};
