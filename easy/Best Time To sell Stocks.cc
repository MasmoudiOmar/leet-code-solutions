class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        if(prices.empty())
            return 0;
        if(prices.size()==0&&prices.size()==1)
            return 0;
        int min = prices[0];
        int result=0;
        int i=0,j=1;
        while(i<prices.size()-1&&j<prices.size())
        {
            if(prices[j]-prices[i]>result)
            {
                result=prices[j]-prices[i];
                j++;
                if(j<=prices.size()-1)
                    continue;
                else
                {
                    i++;
                    j=i+1;
                    continue;
                }
            }
            if(prices[j]-prices[i]<=result)
            {
                j++;
                if(j<=prices.size()-1)
                    continue;
                else
                {
                    i++;
                    j=i+1;
                    continue;
                }
            }
            if(prices[i]>=min)
            {
                i++;
                j=i+1;
                continue;
            }
            if(prices[i]<=min)
            {
                min=prices[i];
                j=i+1;
                continue;
            }
        }
        return result;
    }
    */
        //ok that one was trash lul
        int min = INT_MAX;
        int maxprofit =0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else
                if(prices[i]-min>maxprofit)
                    maxprofit=prices[i]-min;
        }
        return maxprofit;
    }
};
