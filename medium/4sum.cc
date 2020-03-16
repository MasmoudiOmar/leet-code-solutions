class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.empty()||nums.size()<4)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i-1]==nums[i])
                continue;
            if(nums[i]>target&&nums[i]>0)
                break;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1&&nums[j]==nums[j-1])
                    continue;
                if(nums[j]+nums[i]>target&&nums[j]+nums[i]>0)
                    break;
                int k=j+1;
                int e=nums.size()-1;
                while(k<e){
                    if(nums[i]+nums[j]+nums[k]+nums[e]>target)
                        e--;
                    else
                    {
                        if(nums[i]+nums[j]+nums[k]+nums[e]<target)
                            k++;
                        else
                        {
                            result.push_back({nums[i],nums[j],nums[k],nums[e]});
                            e--;
                            k++;
                        }
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
