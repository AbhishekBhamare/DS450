#include<bits/stdc++.h>

using namespace std; 

int solve(){
 
 int n,x;
 
 scanf("%d%d",&n,&x);
 int arr[n];
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 } 
  
 for(int i=0;i<n;i++){
  if(arr[i]>x){
    return 1;
  }
 } 


 vector<int>v;
 int y = 0;
 int cnt = 0,sum;
 while(y!=n-1){
  cnt = 0,sum = 0;
  for(int i=y;i<n;i++){
    
    sum+= arr[i]; 
    cnt++;
    if(sum>x){
     v.push_back(cnt);
     break;
    }   
  }
  y++;
 }
 return *min_element(v.begin(),v.end());
}

int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
 cout<<solve()<<endl;}
 return 0; 
}
