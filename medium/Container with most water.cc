class Solution {
public:
    int maxArea(vector<int>& height) {
        int area =0;
        for(int i=0;i<height.size()-1;i++)
        {
            int start =i;
            int end = height.size()-1;
            while(end>start)
            {
                if(min(height[end],height[start])*(end-start)>area)
                    area=min(height[end],height[start])*(end-start);
                end--;
            }
            if (height[start]>=height[start+1])
            {i++;}
        }
        return area;
    }
};
