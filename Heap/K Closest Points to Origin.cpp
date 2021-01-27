// LeetCode -: https://leetcode.com/problems/k-closest-points-to-origin/submissions/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,pair<int,int>>>heap;
        
        for(int i=0; i<points.size(); i++){
                         
             heap.push({points[i][0]*points[i][0] + points[i][1]*points[i][1], {points[i][0], points[i][1]}});
             if(heap.size()>K){
                heap.pop();
            }
        }
        vector<vector<int>>ans;
        while(!heap.empty()){
            pair<int,int>p;
            p = heap.top().second;
            vector<int>x;
            x.push_back(p.first);
            x.push_back(p.second);
            ans.push_back(x);
            heap.pop();
        }
        return ans;
    }
};
