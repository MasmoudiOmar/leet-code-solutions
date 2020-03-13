class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(n+m,0);
        int c=0 , i=0 ,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]>nums2[j])
            {
                nums3[c]=nums2[j];
                j++;
            }
            else
            {
                nums3[c]=nums1[i];
                i++;
            }
            c++;
        }
        while(i<m)
        {
            nums3[c]=nums1[i];
            i++;
            c++;
        }
        while(j<n)
        {
            nums3[c]=nums2[j];
            j++;
            c++;
        }
        nums1=nums3;
    }
};
