// https://practice.geeksforgeeks.org/problems/topological-sort/1#

class Solution{
	public:
	vector<bool>visited;
	vector<int>ans;
	void dfs(int v, vector<int>adj[]){
	    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u, adj);
    }
    ans.push_back(v);
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	     visited.assign(V, false);
    ans.clear();
    for (int i = 0; i < V; ++i) {
        if (!visited[i])
            dfs(i, adj);
    }
    reverse(ans.begin(), ans.end());
	 return ans;   
	}
};
