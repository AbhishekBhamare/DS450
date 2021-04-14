// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int>ans;
	    list<int>q;
	    vector<bool>vs(V, 0);
	    
	    vs[0]=true;
	    q.push_back(0);
	    
	    while(!q.empty()){
	        
	        int temp=q.front();
	        ans.push_back(temp);
	        q.pop_front();
	        
	        for(auto&i:adj[temp]){
	            if(!vs[i]){
	                vs[i]=true;
	                q.push_back(i);
	            }
	        }
	    }
	    return ans;
	}
};
