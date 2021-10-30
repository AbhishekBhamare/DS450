// https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        int a=1, b=1;
        for(int i=n-2; i>=0; --i){
            int temp=a+b;
            b=a;
            a=temp;
        }
        return a;
    }
};
