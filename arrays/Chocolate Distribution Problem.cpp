#include<bits/stdc++.h>

using namespace std; 

int solve(){
  
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  vector<int>v;
 
  int m;
  scanf("%d",&m);
  
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
   if(i+m>n){break;} 
   v.push_back(arr[i+m-1]-arr[i]);

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
