// https://leetcode.com/problems/maximum-sum-circular-subarray/

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int t1_sum,max_sum,min_sum,t2_sum,total;
        t1_sum=max_sum=min_sum=t2_sum=total=nums[0];
        for(int i=1; i<nums.size(); ++i){
            t1_sum=max(t1_sum+nums[i], nums[i]);
            max_sum=max(t1_sum, max_sum);
            
            t2_sum=min(t2_sum+nums[i], nums[i]);
            min_sum=min(t2_sum, min_sum);
            
            total+=nums[i];            
        }
        return max_sum > 0 ? max(max_sum, total-min_sum) : max_sum;
    }
};
