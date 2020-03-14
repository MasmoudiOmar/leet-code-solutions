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
/*
public:
    double factorial(int m){
        if(m==0)
            return 1;
        if(m==1)
            return 1;
        return m*factorial(m-1);
    }
*/
public:
    vector<int> getRow(int rowIndex) {
        /* this is with maths but it doesn't work accurately cause of double
        
        if(rowIndex==0)
            return {};
        vector<int> v;
        for(int i=0;i<(rowIndex+1)/2+(rowIndex+1)%2;i++)
            v.push_back(int((factorial(rowIndex)/(factorial(i)*factorial(rowIndex-i)))));
        int i=(rowIndex+1)/2;
        while(i--)
            v.push_back(v[i]);
        return v;
        */
        vector<vector<int>> v = generate(rowIndex+1);
        vector<int> vec= v[rowIndex];
        return vec;
    }
};
