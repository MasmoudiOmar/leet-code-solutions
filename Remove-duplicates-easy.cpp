class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        if(nums.size()==0)
            return nums.size();
        int q=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if (nums[i]==q)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            else
                q=nums[i];
        }
        return nums.size();
    }
};
