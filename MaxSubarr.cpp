#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector
#define in insert


void solve(){   //KADANE'S ALGORITHM for MAX SUBARRAY

   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }

   int crn = arr[0], ovll = arr[0];

   for(int i=1;i<n;i++){

    if(arr[i]<arr[i]+crn){

       crn += arr[i];  
    }
    else{
        crn = arr[i];
    }
    if(crn>ovll){
      ovll = crn;
    }
   }

   cout<<ovll<<endl;
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
      // int t;
      // scanf("%d",&t);
      // while(t--){
      solve();
  return 0;
}
