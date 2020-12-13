#include<bits/stdc++.h>
using namespace std;



int solve(int x, int y, string s1, string s2){
    
    vector<vector<int>>dp(x+1,vector<int>(y+1)); // 2D vector
    for(int i=0; i<x+1; i++){
	    for(int j=0; j<y+1; j++){
		
		if(i == 0 || j == 0){
	    	dp[i][j] = 0;
     	}
        else if(s1[i-1] == s2[j-1]){
	
	    	dp[i][j] = dp[i-1][j-1]+1;
    	
		}
        else{
	    	dp[i][j] =  max(dp[i-1][j], dp[i][j-1]);
     	}	
	  }
	}    
	return dp[x][y]; 
}
int main(){ 

   	string s1, s2;
       cin >> s1 >> s2;
    int x = s1.size();
    int y = s2.size();	
   	cout <<  solve(x, y, s1, s2);
     return 0;	  
}
