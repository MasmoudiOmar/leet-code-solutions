class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3||nums.empty())
            return {};
        sort(nums.begin(),nums.end());
        long int closest = INT_MAX;
        for (int i = 0; i < nums.size() - 2; i++) { 
            int p1 = i + 1, p2 = nums.size() - 1; 
            while (p1 < p2) { 
                int sum = nums[i] + nums[p1] + nums[p2]; 
                if (abs(target - sum) < abs(target - closest)) { 
                    closest = sum; 
                } 
                if (sum > target) { 
                    p2--; 
                }    
  
                else { 
                    p1++; 
                } 
            } 
        }
        return closest;
    }
};
