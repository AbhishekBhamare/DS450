// https://leetcode.com/problems/jump-game/submissions/

class Solution {
public:
    bool canJump(vector<int>& nums) {
       if(nums.size()==1)
           return true;
        if(nums[0]==0)
            return false;
        
        int maxJump=0;
        for(int i=0; i<nums.size(); ++i){
            if(i>maxJump) return false;
            maxJump=max(i+nums[i], maxJump);
        }
        return true;
        
    }
};
