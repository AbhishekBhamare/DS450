#include<bits/stdc++.h>
using namespace std;
void solve(){
    
	 int n,w;
	 cin >> n >> w;
	 int wt[n];
	 int v[n];
	 
	 for(int i=0; i<n; i++){
		 cin >> v[i];
	 }
	 for(int i=0; i<n; i++){
		 cin >> wt[i];
	 }
   
	 int dp[n+1][w+1];
	 memset(dp,-1,sizeof(dp));
   
	 for(int i=0; i<n+1; i++){
		 for(int j=0; j<w+1; j++){
			 if(i==0 || j==0){
				 dp[i][j] = 0;
			 }
			 else if(wt[i-1] <= j){
				 dp[i][j] = max(v[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
			 }
			 else{
				 dp[i][j] = dp[i-1][j];
			 }
		 }
	 }
	 cout <<  dp[n][w] << "\n";
}
int main(){
    solve();
    return 0;	  
}

 
