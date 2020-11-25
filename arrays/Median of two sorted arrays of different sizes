#include<bits/stdc++.h>
 
using namespace std; 
#define vt vector
#define pb push_back

void solve(){

   int n,m;
   vt<int>v1;
   vt<int>v2;
   scanf("%d%d",&n,&m);
   for (int i = 0; i < n; ++i){  // sorted array 1
      int ele;
      scanf("%d",&ele);
      v1.pb(ele); 
   }

   for(int i=0;i<m;i++){   // sorted array 2
    int ele;
    scanf("%d",&ele);
    v2.pb(ele);
   }
   vt<int>v;
   int p1=0,p2=0;
   
   while(p1<n && p2<m){

     if(v1[p1]<v2[p2]){
        v.pb(v1[p1]);
        p1++;
     }
     else{

        v.pb(v2[p2]);
        p2++;
     }

   }
   
   while(p1<n){
      v.pb(v1[p1]);
      p1++;
   } 
  while(p2<m){
    v.pb(v2[p2]);
    p2++;
  } 
  
  if(v.size()%2!=0){
     cout<<v[v.size()/2]<<endl;
  }
  else{
    cout<<(v[(v.size()/2)-1]+v[v.size()/2])/2<<endl;
  }
}  
int main()
{
 solve();
 return 0; 
}
