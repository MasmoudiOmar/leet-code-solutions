class Solution {
public:
    int reverse(int x) {
        long int result =0 ;
        int n=1;
        while(x!=0)
        {
            if (result*n<INT_MAX && result*n>INT_MIN )
            {
                result=result*n +x%10;
            }
            else
                return 0;
            x/=10;
            n=10;
        }
        return result;
    }
};
