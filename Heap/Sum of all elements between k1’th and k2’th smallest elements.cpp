// GFG -: https://www.geeksforgeeks.org/sum-elements-k1th-k2th-smallest-elements/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k1, k2;
	cin >> n >> k1 >> k2; // k1>k2;

	vector<int>arr(n);

	for(int i=0; i<n; i++)
		cin >> arr[i];

	priority_queue<int>maxheap1, maxheap2;
	for(int i=0; i<n; i++){
	    maxheap1.push(arr[i]);
		if((int)maxheap1.size()>k1){
		   maxheap1.pop();
		}
	}
	int t1=maxheap1.top();

	for(int i=0; i<n; i++){
	   maxheap2.push(arr[i]);
	   if((int)maxheap2.size()>k2){
	     maxheap2.pop();
	   }
	}
	int t2=maxheap2.top();
	int sum=0;
	for(int i=0; i<n; i++){
		if(arr[i]>t1&&arr[i]<t2){
		   sum+=arr[i];
		}
	}
	cout << sum << "\n";
}
int main(){

 
  solve();
	return 0;
}
