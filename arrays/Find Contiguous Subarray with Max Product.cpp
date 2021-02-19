#include<bits/stdc++.h>

using namespace std; 
#define ll long long 

int solve(){
  
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  
     scanf("%d",&arr[i]);
  }
   if(n==1){return arr[0];}      
   
   ll currntProduct = 1;
   ll maxProduct = 0;
  
   for(int i=0;i<n;i++){
    
    currntProduct = currntProduct*arr[i];
    maxProduct = max(currntProduct,maxProduct);
    if(currntProduct==0){
      currntProduct = 1;
    }

   }
  currntProduct = 1;   
  for(int i=n-1;i>=0;i--){

   currntProduct = currntProduct*arr[i];
   maxProduct = max(currntProduct,maxProduct);
   if(currntProduct==0){
      currntProduct = 1;
    }
  }    
return maxProduct;

}
int main()
{
  cout<<solve();
  return 0;
}
