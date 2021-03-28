// https://leetcode.com/problems/number-complement/

class Solution {
public:
    int findComplement(int num) {
        int temp=num, cnt=0;
        while(temp){
            ++cnt;
            temp>>=1;
        }
        int a=pow(2,cnt)-1;
        return num^a;
    }
};
