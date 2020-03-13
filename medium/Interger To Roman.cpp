class Solution {
public:
    string intToRoman(int num) {
        string s="";
        if(num%10<=3)
            for(int i=0;i<num%10;i++)
                s=s+"I";
        if(num%10 == 4)
            s=s+"IV";
        if(num%10>4 && num%10<9)
        {
            s+="V";
            for(int i=1;i<=num%10-5;i++)
                s+="I";
        }
        if(num%10==9)
            s+="IX";
        if(num/10==0)
            return s;
        if((num/10)%10<=3)
            for(int i=0;i<(num/10)%10;i++)
                s="X"+s;
        if((num/10)%10==4)
            s="XL"+s;
        if((num/10)%10>4 && (num/10)%10<9)
        {
            for(int i=1;i<=(num/10)%10-5;i++)
                s="X"+s;
            s="L"+s;
        }
        if((num/10)%10==9)
            s="XC"+s;
        
        if(num/100==0)
            return s;
        if((num/100)%10<=3)
            for(int i=0;i<(num/100)%10;i++)
                s="C"+s;
        if((num/100)%10==4)
            s="CD"+s;
        if((num/100)%10>4 && (num/100)%10<9)
        {
            for(int i=1;i<=(num/100)%10-5;i++)
                s="C"+s;
            s="D"+s;
        }
        if((num/100)%10==9)
            s="CM"+s;
        
        if(num/1000==0)
            return s;
            for(int i=0;i<(num/1000)%10;i++)
                s="M"+s;
        return s;
    }
};
