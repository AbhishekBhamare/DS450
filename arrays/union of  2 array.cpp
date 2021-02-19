#include<bits/stdc++.h>

using namespace std; 


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

      int t;
      scanf("%d",&t);
      while(t--){
      solve();}
  return 0;
}
