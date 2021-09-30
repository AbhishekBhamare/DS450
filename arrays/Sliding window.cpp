#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define vt          vector
#define vi          vector<int>
#define si          set<int>
#define sz(a)       (int)a.size()
#define all(a)      a.begin(), a.end()
#define pq          priority_queue
#define pb          push_back
#define eb          emplace_back
#define po          pop_back
#define mp          make_pair
#define mt          make_tuple
#define ld          long double
#define ff          first
#define ss          second
#define in          insert
#define FOR(i,a,b)  for(int i=a; i<b; i++)
#define FOR1(i,a,b) for(int i=a; i<=b; i++)
#define RFOR(i,a,b) for(int i=a; i>=b; i--)
#define mod         1e9+7

// Find countinous subarray of length k having max sum.
// Sliding wimdow algorithm

void solve(){
	int n,k;
	cin >> n >> k;
	vi arr(n);
	FOR(i,0,n){
		cin >> arr[i];
	}
	int len=0, ans=0, j=0, sum=0;
	FOR(i,0,n){
		sum+=arr[i];
		++len;
		ans = max(ans, sum);
		if(len==k){
			sum -= arr[j];
			++j;
			--len;
		}
	}
	cout << ans << "\n";
}
int main(){

  ios::sync_with_stdio(0);  // makes input and output more efficient.
  cin.tie(0);
	solve();
	return 0;
}
