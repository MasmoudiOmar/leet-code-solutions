class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool b = false;
        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]==9)
            {
                b=true;
            }
            else
            {
                b=false;
                break;
            }
        }
        if(b==true)
        {
            digits[0]=1;
            for(int i=1;i<digits.size();i++)
                digits[i]=0;
            digits.push_back(0);
        }
        else
        {
            int l = digits.size()-1;
            if(digits[l]==9)
            {
                while(digits[l]==9)
                {
                    digits[l]=0;
                    l--;
                }
                digits[l]++;
            }
            else 
                digits[l]++;
        }
        return digits;
    }
};
