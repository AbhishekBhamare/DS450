#include<bits/stdc++.h>

using namespace std; 

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
  solve();
  return 0;
}
