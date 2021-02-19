#include<bits/stdc++.h>

using namespace std; 

int solve(){
  
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  vt<int>dp(n);  // for storing profit
  
  int mx = arr[n-1];
  int mi = arr[0];

  for(int i=n-2;i>=0;i--){
    
    if(arr[i]>mx){mx = arr[i];}

    dp[i] = max(dp[i+1],(mx-arr[i]));
  }

  for(int i=1;i<n;i++){
     if(arr[i]<mi){mi = arr[i];}
     dp[i] = max(dp[i-1],dp[i]+(arr[i]-mi));
  }

return dp[n-1];
   
}  
int main()
{
 cout<<solve();
 return 0; 
}
