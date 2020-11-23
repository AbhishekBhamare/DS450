#include<bits/stdc++.h>

using namespace std; 
#define vt vector
#define pb push_back

void solve(){
   
  int n1,n2,n3;
  scanf("%d%d%d",&n1,&n2,&n3);

  int arr1[n1],arr2[n2],arr3[n3];

  for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
  }

  for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
  }

  for(int i=0;i<n3;i++){
     scanf("%d",&arr3[i]);
  }

  int i=0,j=0,k=0;
  vt<int>x;
  while(i<n1 && j<n2 && k<n3){

     if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
        x.pb(arr1[i]);
        i++;
        j++;
        k++;
     }
     else if(arr1[i]<arr2[j]){
        i++;
     }
     else if(arr2[j]<arr3[k]){
         j++;
     }
     else{k++;}

     while(arr1[i]==arr1[i-1]) {i++;}
     while(arr2[j]==arr2[j-1]) {j++;}
     while(arr3[k]==arr3[k-1]) {k++;}  
  } 
  if(x.size()==0){cout<<"-1"<<endl; return;}
  for(int i=0;i<x.size();i++){
      cout<<x[i]<<" ";
  }
 
}
int main()
{
 solve();
 return 0; 
}
