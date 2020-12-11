#include<bits/stdc++.h>
using namespace std;

void solve(){
   string s;
   cin >> s;
   int n = s.size();
   bool dp[n][n];
   memset(dp,0,sizeof(dp));
   string ans = "";
   
   for(int g=0; g<n; g++){
	   for(int i=0, j=g; j<n; i++, j++){   // This loop denotes length (i.e. Gap between to char in string) of substring from 0 to n-1;
 		   
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
			   ans = s.substr(i,g+1);    // gap increases by 1 as g increases so ultimately we get longest possible palindromic substring    
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
