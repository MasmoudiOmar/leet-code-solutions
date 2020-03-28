class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        for(int mul = 5; mul <= n; mul *= 5){
            count += n / mul;
            if(mul > INT_MAX / 5)break;
        }
        return count;
    }
};
