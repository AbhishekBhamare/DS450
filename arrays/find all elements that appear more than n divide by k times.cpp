#include<bits/stdc++.h>

using namespace std; 
#define in insert


int count_(int x,int arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
       if(arr[i]==x){
         cnt++;
       }
    }
   return cnt; 
}

void solve(){
   
   set<int>v;
   int n,k;
   scanf("%d%d",&n,&k);
   int arr[n];
   for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }
   
   for(int i=0;i<n;i++){
      if(count_(arr[i],arr,n)>(n/k)){
         v.in(arr[i]);
      }
   }
  
  for(auto i:v){
     cout<<i<<" ";
  }

}  
int main()
{
 solve();
 return 0; 
}
