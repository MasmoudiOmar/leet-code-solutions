class Solution {
public:
    int mySqrt(int x) {
        double sq = sqrt((double)x);
        cout<<sq;
        int result = int(sq);
        return result;
    }
};
