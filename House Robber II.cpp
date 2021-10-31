// https://leetcode.com/problems/house-robber-ii/

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
       int a=0,b=0;
        for(int i=0; i<nums.size()-1; ++i){
            int temp=max(a+nums[i], b);
            a=b;
            b=temp;
        }
        int x=0,y=0;
        for(int i=1; i<nums.size(); ++i){
            int temp=max(x+nums[i], y);
            x=y;
            y=temp;
        }
        return max(y,b); 
    }
};
