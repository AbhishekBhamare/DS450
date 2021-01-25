//Problem link-: https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1#

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
  vector<int>arr(n);
    
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
   	
	priority_queue<int, vector<int>, greater<int>>heap;
	vector<int>ans; 
	for(int i=0; i<n; i++){
	    heap.push(arr[i]);
		if((int)heap.size()>k){
		   heap.pop();
		}
	}
    while(!heap.empty()){
	   ans.insert(ans.begin(), heap.top());	
       heap.pop();	   
	}
	for(int i=0; i<(int)ans.size(); ++i){
	   cout << ans[i] << " ";
	}
	cout << "\n";
}
int main(){


    solve();
    return 0
}
