// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/#c251759

#include <bits/stdc++.h>
using namespace std;

vector<bool>visited(100005, false);
vector<int>adj[100005];
vector<int>level(10005);
void bfs(int t){
	queue<int>Q;
	Q.push(t);
	level[t]=1;
    visited[t]=true;
	while(!Q.empty()){
		int temp=Q.front();
		Q.pop();
		for(auto&i:adj[temp]){
			if(!visited[i]){
				level[i]=level[temp]+1;
				Q.push(i);
				visited[i]=true;
			}
		}
	}
}

int main(){
	int n,x,y;
	cin >> n;
	for(int i=0; i<n-1; ++i){
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int m,ans=0;
	cin >> m;
	bfs(1);
	for(int i=0; i<n; ++i){
		if(level[i]==m)
		   ++ans;
	}
	cout << ans << "\n";
	return 0;
}
