#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector

//can be done using seggeregation technique in O(n) time and sort can be avoided
void solve(){

  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){ 
      scanf("%d",&arr[i]);
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
      // int t;
      // scanf("%d",&t);
      // while(t--){
      solve();
  return 0;
}
