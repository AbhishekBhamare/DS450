

#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,m;
	cin >> n >> m;

	vector<int>adj[n];
	for(int i=0; i<m; ++i){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=0; i<n; ++i){
		cout << i << "->";
		for(auto&j:adj[i]){
			cout << j << " ";
		}
		cout << "\n";
	}
	return 0;
}

/* input:
0 1
0 4
1 2
1 3 
1 4
2 3
3 4


output:

0 -> 1 4
1 -> 0 1 2 3 4
2 -> 1 3
3 -> 1 2 4
4 -> 0 1 3
*/
