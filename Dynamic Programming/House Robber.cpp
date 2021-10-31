// https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0; i<nums.size(); ++i){
            int temp=max(a+nums[i], b);
            a=b;
            b=temp;
        }
        return b;
    }
};
