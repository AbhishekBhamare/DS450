#include<bits/stdc++.h>

using namespace std; 
#define ll long long 
#define mp make_pair
#define pb push_back
#define vt vector


void solve(){

    int n;
    int mx=0,mi=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(mi>arr[i]){mi = arr[i];}
        if(mx<arr[i]){mx = arr[i];}

    }
    cout<<"Max Element-:"<<mx<<endl;
    cout<<"Min Element-:"<<mi<<endl;
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
     //  int t;
     //  scanf("%d",&t);
     // while(t--){
      solve();
  return 0;
}
