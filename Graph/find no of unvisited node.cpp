// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/

#include<bits/stdc++.h>
using namespace std;

// DFS 
vector<int>adj[10005];
vector<bool>visited(100005,false);
int ans=0;

void dfs(int t){
	visited[t]=true;
	++ans;
	for(int i=0; i<(int)adj[t].size(); ++i){
		if(!visited[adj[t][i]]){
			dfs(adj[t][i]);
		}
	}
}

int main(){
	int n,e,x,y;
	cin >> n >> e;
	for(int i=0; i<e; ++i){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int t;
	cin >> t;
	dfs(t);
	cout << n-ans << "\n";
  return 0;
}
