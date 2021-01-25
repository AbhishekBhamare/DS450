// Leetcode -: https://leetcode.com/problems/find-k-closest-elements/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>>heap;
        vector<int>ans;
        for(int i=0; i<arr.size(); i++){
            heap.push(make_pair(abs(arr[i]-x), arr[i]));
            if(heap.size()>k){
                heap.pop();
            }
        }
        while(!heap.empty()){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
