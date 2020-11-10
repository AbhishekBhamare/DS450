#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector


void solve(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int k;
  scanf("%d",&k);
  sort(arr,arr+n);
  cout<<arr[k-1]<<endl;

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
