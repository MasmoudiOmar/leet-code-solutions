class Solution {
public:
    int divide(long dividend, long divisor) {
        if(dividend<0&&divisor<0)
        {
            if(dividend==INT_MIN&&divisor==-1)
                return INT_MAX;
            dividend= (0 -dividend);
            divisor = (0 -divisor);
        }
        if(divisor==1)
            return dividend;
        if(abs(dividend)<abs(divisor))
            return 0;
        if((dividend<0 && divisor>0)||(dividend>0 && divisor<0))
        {
            return -divide(abs(dividend),abs(divisor));
        }
        long p = divisor;
        int counter = 1;
        if(dividend-divisor>=divisor)
        {
            do
            {
                counter+=counter;
                p+=p;
            }
            while(p+p<=dividend);
            return counter + divide(dividend-p,divisor);
                
        }
        else
            return 1;
    }
};
