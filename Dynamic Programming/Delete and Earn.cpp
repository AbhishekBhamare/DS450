// https://leetcode.com/problems/delete-and-earn/

// Same as house robber problem with a little twist.

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int arr[30000]={0};
        int mx=0;
        for(int i=0; i<nums.size(); ++i){
            ++arr[nums[i]];
            mx=max(mx, nums[i]);
        }
       
        int a=0, b=0;
        for(int i=0; i<=mx; ++i){
            int temp=max(a+(i*arr[i]), b);
            a=b;
            b=temp;
        }
        return b;
    }
};
