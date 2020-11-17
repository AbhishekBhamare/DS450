#include<bits/stdc++.h>

string solve(){
   
  int n,m;
  scanf("%d%d",&n,&m);
  int arr1[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr1[i]);
  }
  int arr2[m];
  for(int i=0;i<m;i++){
     scanf("%d",&arr2[i]);
  }
  int cnt=0;
  for(int i=0;i<m;i++){
     
     for(int j=0;j<n;j++){

         if(arr2[i]==arr1[j]){
            cnt++;
         }
     }
     if(cnt==0){return "No";}
  }
  
  if(cnt==m) {
    return "Yes";
  }
  else{
    return "No";
  }
  
}
int main()
{
      int t;
      scanf("%d",&t);
      while(t--){
    cout<<solve()<<endl;}
  return 0;
}
