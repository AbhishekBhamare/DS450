// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	vector<int>arr(n);
	for(int i=0; i<n; i++)
		   cin >> arr[i];

	priority_queue<int, vector<int>, greater<int>>minheap;

	for(int i=0; i,n; i++){
	   minheap.push(arr[i]);
	   if(minheap.size()>k){
	      minheap.pop();
	   }
	}
	cout << minheap.top() << "\n";
}
int main(){

     solve();
   return 0;
}

