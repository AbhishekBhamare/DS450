#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, k;
	cin >> n >> k;

	vectro<int>arr(n);
  for(int i=0; i<n; i++)
		 cin >> arr[i];

	priority_queue<int, vector<int>, greater<int>>minheap;
  vector<int>ans;
	for(int i=0; i<n; i++){
	   minheap.push(arr[i]);
	   if(minheap.size()>k){
	     ans.push_back(minheap.top());
		   minheap.pop();
	   }
	}
	while(!minheap.empty()){
		ans.push_back(minheap.top());
		minheap.pop();
	}
	for(int i=0; i<n; i++){
        cout << ans[i] << " ";	 
    }  	
	cout << "\n";
}
int main(){

 
   solve();
   return 0;
}
