class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        if(nums.size()==0)
            return 0;
        while(start<nums.size())
        {
            if (nums[start]<target)
                start++;
            else
                return start;
        }
        
        
            
        return start;
    }
};
