#include<bits/stdc++.h>
using namespace std;
void solve(){  
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int cnt0=0,cnt1=0,cnt2=0;

    for(int j=0;j<n;j++){
       switch(arr[j]){

        case 0: 
            cnt0++;
            break;
        case 1:
           cnt1++;
           break;    
        case 2:
            cnt2++;
            break;   
       }
      }
       int i=0;        
       while(cnt0--){
          arr[i] = 0;
          i++;
       }

       while(cnt1--){
          arr[i] = 1;
          i++;
       }
       while(cnt2--){
         arr[i] = 2;
         i++;
       }
  
    for(int k=0;k<n;k++){
          cout<<arr[k]<<" ";
     }

    cout<<endl;
}
int main()
{
      int t;
      scanf("%d",&t);
      while(t--){
    solve();}
  return 0;
}
