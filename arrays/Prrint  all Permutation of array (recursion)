#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int current_index, int n){
    
	if(current_index == n-1){
		for(int i=0; i<n; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else{
    for(int i=current_index; i<n; i++){
		swap(arr[i], arr[current_index]);
		solve(arr, current_index+1, n);
		swap(arr[i], arr[current_index]);
	}   
  }
}
int main()
{ 
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++){
	   cin >> arr[i];
   }	
   solve(arr,0,n); 
   return 0; 
}

 
