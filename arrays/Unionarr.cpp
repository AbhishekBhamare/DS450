#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector
#define in insert


void solve(){
   set<int>s;
   int n,m;
   scanf("%d%d",&n,&m);
   int arr1[n],arr2[m];

   for(int i=0;i<n;i++){
       scanf("%d",&arr1[i]);
       s.in(arr1[i]);
   }
   for(int i=0;i<m;i++){
      scanf("%d",&arr2[i]);
      s.in(arr2[i]);
   }

   cout<<s.size()<<endl;

}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
      int t;
      scanf("%d",&t);
      while(t--){
      solve();}
  return 0;
}
