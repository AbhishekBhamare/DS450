// https://leetcode.com/problems/permutations/

class Solution {
public:
    void next_per(vector<int>& nums, vector<vector<int>>&ans, vector<int>&visited, vector<int>&temp){
        
        if(nums.size() == temp.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0; i<nums.size(); ++i){
            if(visited[i]){
                continue;
            }else{
                temp.push_back(nums[i]);
                visited[i]=true;
                next_per(nums, ans, visited, temp);
                visited[i]=false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>visited(nums.size(), false);
        vector<int>temp;
        next_per(nums, ans, visited, temp);
        return ans;
    }
};
