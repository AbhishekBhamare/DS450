// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
public:
    vector<int>ans;
    vector<bool>visited;
    void bfs(vector<int>adj[], int t){
        queue<int>Q;
        Q.push(t);
        visited[t]=true;
        while(!Q.empty()){
            int temp=Q.front();
            ans.push_back(temp);
            Q.pop();
            for(auto&i:adj[temp]){
                if(!visited[i]){
                    visited[i]=true;
                    Q.push(i);
                }
            }
        }
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	     visited.assign(V, false);
	     bfs(adj, 0);
	     return ans;
	}
};
