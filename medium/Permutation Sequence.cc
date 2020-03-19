class Solution {
public:
    string getPermutation(int n, int k) {
        int result;
        vector<int>v;
        for(int i=1;i<=n;i++)v.push_back(i);
        result=v[index(k,n-1)];
        v.erase(v.begin()+index(k,n-1));
        k=k-index(k,n-1)*fact(n-1);
        cout<<k;
        for(int i=2;i<=n;i++)
        {
            cout<<n<<endl;
            if(k>0)
            {
                result=result*10+v[index(k,n-i)];   
                v.erase(v.begin()+index(k,n-i));
            }
            else
            {
                result=result*10+v[0];
                v.erase(v.begin());
            }
             k=k-index(k,n-i)*fact(n-i);
        }
        return to_string(result);
    }
public:
    int index(int k,int n)
    {
        int i = (k / fact(n)) + (k%fact(n)? 1 : 0);
        i--;
        return i;
    }
public:    
    int fact(int k)
    {
        if(k==0)
            return 1;
        if(k==1)
            return 1;
        return k*fact(k-1);
    }
};
