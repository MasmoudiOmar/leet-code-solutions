class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start =0 , end = numbers.size()-1;
        while(start<end) 
        {
            if(numbers[start]+numbers[end]>target){end--;continue;}
            if(numbers[start]+numbers[end]<target){start++;continue;}
            break;
        }
        vector<int> v;
        v.push_back(++start);
        v.push_back(++end);
        return v;
    }
};
