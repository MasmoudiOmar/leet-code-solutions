class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,vector<char> > m;
        m.insert(pair<int,vector<char>>(2,{'a','b','c'}));
        m.insert(pair<int,vector<char>>(3,{'d','e','f'}));
        m.insert(pair<int,vector<char>>(4,{'g','h','i'}));
        m.insert(pair<int,vector<char>>(5,{'j','k','l'}));
        m.insert(pair<int,vector<char>>(6,{'m','n','o'}));
        m.insert(pair<int,vector<char>>(7,{'p','q','r','s'}));
        m.insert(pair<int,vector<char>>(8,{'t','u','v'}));
        m.insert(pair<int,vector<char>>(9,{'w','x','y','z'}));
        
        if(digits=="")
            return {};
        if(digits.length()==1)
        {
            if(digits[0]==1)
                return {};
            vector<string> result;
            for(auto c : m[digits[0]-'0'])
                result.push_back(string(1,c));
            return result;
        }
        vector<string> result;
        int i=0;
        while(digits[i]=='1')
            i++; 
        vector<string> v = letterCombinations(digits.substr(i+1,digits.length()-i-1));
        for(auto a : m[digits[i]-'0'])
        {
                for (auto s : v)
                {
                    s=string(1,a)+s;
                    result.push_back(s);
                }
        }
        return result;
        
    }
};
