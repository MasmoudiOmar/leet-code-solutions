class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)
            return {};
        if(numRows==1)
            return {{1}};
        if(numRows==2)
            return {{1},{1,1}};
        vector<vector<int>> v = generate(numRows -1);
        vector<int> vec ;
        vec.push_back(1);
        int i=0,j=1;
        while(j<v.back().size())
        {
            vec.push_back(v.back()[i]+v.back()[j]);
            i++;
            j++;
        }
        vec.push_back(1);
        v.push_back(vec);
        return v;
    }
};
