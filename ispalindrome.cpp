class Solution {
public:
    int reverse(int x) {
        long res = 0, inf = 1LL << 31;
        bool neg = x < 0;
        // x = abs(x);
        while(x) {
            res = res * 10 + x % 10;
            x /= 10;
        }
        if (res < -inf || res >= inf) {
            return 0;
        }
        return res;
    }

public:    
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else if(x==reverse(x))
            return true;
            else
                return false;
    }
};
