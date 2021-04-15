// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
public:
    vector<int>ans;
    vector<bool>visited;
    
    void dfs(vector<int>adj[], int t){
        
        visited[t]=true;
        ans.push_back(t);
        for(auto&i:adj[t]){
            if(!visited[i]){
                dfs(adj, i);
            }
        }
    }
    
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    visited.assign(V, false);
	    
	    dfs(adj,0);
	    return ans;
	}
};
