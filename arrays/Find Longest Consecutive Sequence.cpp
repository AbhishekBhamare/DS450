#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector
#define in insert
#define ff first
#define ss second


vt<int>v;
void check(int arr[],int x,int n){
 int cnt = 0;
  for(int i=0;i<n;i++){
    
     if(arr[i]-x==1){
         cnt++;
         x = arr[i];
     }
  }
  
  v.pb(cnt);
}

int solve(){
  
 vt<pair<int,bool>>s;
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
  
     scanf("%d",&arr[i]);
     s.pb(mp(arr[i],false));
  }
   if(n==0){return 0;}
  
  sort(arr,arr+n);

    for(int i=0;i<n;i++){
    
     for(int j=0;j<n;j++){
        
          if(arr[i]-1==s[j].ff){
           
          s[j].ss=true;
      
     }
  }
} 
  for(int i=0;i<n;i++){
    
    if(s[i].ss==true){
       
        check(arr,s[i].ff,n);
    }

  }
   if(v.empty()){return 1;}
   return *max_element(v.begin(),v.end())+1;
}
int main()
{
  cout<<solve();
  return 0;
}
