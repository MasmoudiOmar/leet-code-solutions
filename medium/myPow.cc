class Solution {
public:
	double myPow(double x, int n) {
		int isNegative = 1;
		if (x < 0 && n % 2)isNegative = -1;
		cout<<isNegative;
    if(x< 0) x = -x;
    if (n == 0)return 1.0;
		if (n == 1)return x;
		if (x == 0)return 0;
		if (x == 1)return isNegative;
		if (n >= 0)return isNegative*pow(x * x, n / 2) * pow(x, n % 2);
		else return isNegative*pow(1 / x, -long(n));
	}
};
