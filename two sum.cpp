class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i=0 ; i<nums.size(); i++)
        {
            for (int j=i+1 ; j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    result.push_back(min(i,j));
                    result.push_back(max(i,j));
                    return result;
                }
            }
        }
        return result;
    }
};
