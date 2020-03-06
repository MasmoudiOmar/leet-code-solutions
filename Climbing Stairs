//=================================
//=====Recursion===================
//==Time exceeded though :(========

/*
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        return climbStairs(n-1)+climbStairs(n-2);
    }
};
*/

//=====This was a pesky one========
//=====Formulas didn't work properly
//=====So i brute forced it========
//=====Fibonacci Golden ratio======

class Solution {
public:
    int climbStairs(int n) {
        if (n==1)
            return 1;
        if(n==2)
            return 2;
        int n1=1;
        int n2=2;
        int n3;
        n-=2;
        while(n--)
        {
            n3=n2+n1;
            n1=n2;
            n2=n3;
        }
        return n3;
    }
};
