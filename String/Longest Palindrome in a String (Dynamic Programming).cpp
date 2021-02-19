#include<bits/stdc++.h>

// REFERENCE PEPCODING YT CHANNEL
// WORKED ON LEETCODE

using namespace std;

void solve(){
   string s;
   cin >> s;
   int n = s.size();
   bool dp[n][n];
   memset(dp,0,sizeof(dp));
   string ans = "";
   
   for(int g=0; g<n; g++){   // g stands for gap between first and last char of a substring
	   
     for(int i=0, j=g; j<n; i++, j++){
		   
		   if(g == 0){
			   dp[i][j] = 1;
		   }
		   else if(g == 1 && s[i] == s[j]){
			   dp[i][j] = 1;
		   }
		   else{
			   if(s[i] == s[j] && dp[i+1][j-1] == 1){
			   dp[i][j] = 1;
		    }
			  else{dp[i][j] = 0;}
		   }
		   if(dp[i][j]){
			   
			   ans = s.substr(i,g+1);
		   }
	   }
   }
   cout << ans << "\n";
}
int main()
{
 	 solve(); 
   return 0;	  
}

 
