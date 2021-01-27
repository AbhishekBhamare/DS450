// GFG -: https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<long long>arr(n);

	for(int i=0; i<n; i++)
		cin >> arr[i];

	priority_queue<long long, vector<long long>, greater<long long>>heap;

	for(int i=0; i<n; i++){
	    heap.push(arr[i]);
	}
  long long cost=0;
	while(heap.size()>=2){
	  long long temp=0;
		temp+=heap.top();
		heap.pop();
		temp+=heap.top();
		heap.pop();
		cost+=temp;
		heap.push(temp);
	}
	cout << cost << "\n";
}
int main(){

  solve();
	return 0;
}
