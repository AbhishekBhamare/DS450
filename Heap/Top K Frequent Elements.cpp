// leetcode -: https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>>heap;
        unordered_map<int, int>mp;
        
        for(auto&i:nums){
            mp[i]++;
        }
        
        for(auto i=mp.begin(); i!=mp.end(); ++i){
            heap.push(make_pair(i->second, i->first));
            if(heap.size()>k){
                heap.pop();
            }
        }
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};
