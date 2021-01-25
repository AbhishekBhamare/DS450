#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int>arr(n);
  for(int i=0; i<n; i++){
		cin >> arr[i];
  }
  
	priority_queue<int>maxheap;
	for(int i=0; i,n; i++){
	   maxheap.push(arr[i]);
	   if(maxheap.size()>k){
	      maxheap.pop();
	   }
	}
	cout << maxheap.top() << "\n";
}
int main(){

   solve();
   return 0;
}
