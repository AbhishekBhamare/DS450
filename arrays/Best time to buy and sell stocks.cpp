#include<bits/stdc++.h>

using namespace std; 

int solve(int arr[],int n){  
    
    int profit = 0;
    int min = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
           min = arr[i];
        }
        else{
          profit = max(profit,arr[i] - min);
        }
    } 

    return profit;
}
int main()
{
 
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     cout<<solve(arr,n);
  return 0;
}
