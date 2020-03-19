class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        if (k==0||n==0)
            return {};
        if(k==1)
        {
            for(int i=1;i<=n;i++)result.push_back({i});
            return result;
        }
        vector<vector<int>> v;
        v=combine(n,k-1);
        for(int i=1;i<=n;i++)
        {
            for(auto c : v)
            {
                int go = 1;
                for(auto x : c)
                    if(x==i){go=0;break;}
                if(go==0)
                    break;
                vector<int> m = {i};
                m.insert( m.end(), c.begin(), c.end() );
                sort(m.begin(),m.end());
                result.push_back(m);
            }
        }
        //sort(result.begin(),result.end());
        //result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
