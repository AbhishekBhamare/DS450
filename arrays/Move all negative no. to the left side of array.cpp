#include<bits/stdc++.h>

using namespace std; 

void solve(){  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while(i<j){

        if(arr[i]>=0){
           swap(arr[i],arr[j]);
           j--;
        }
        else{
           i++;
        }
    }  
    
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    } 
  
   }
int main()
{
  solve();
  return 0;
}
