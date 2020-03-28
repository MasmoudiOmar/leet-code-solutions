class Solution {
public:
    int firstBadVersion(int n) {
        int start=1 , end=n ,mid =n/2 ;
        while(end>start){
            if(isBadVersion(mid)){
                end = mid;
                mid =(end-start)/2 + start;
            }
            else
            {
                start = mid + 1;
                mid=(end-start)/2 + start;
            }
        }
        return start;
    }
};
