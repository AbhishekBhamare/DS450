//https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        int maxReach=0, jumps=0, crtReach=0;
        
        for(int i=0; i<nums.size()-1; ++i){
            if(maxReach<i+nums[i]){
                maxReach=i+nums[i];
            }
            if(i==crtReach){
                ++jumps;
                crtReach=maxReach;
            }
        }
        return jumps;
    }
};
