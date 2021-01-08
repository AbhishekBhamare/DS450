// GeekForGeeks -: https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1
#include<bits/stdc++.h>
using namespace std;
   

int solve(){
  string s;
	cin >> s;
	
	int n = s.size();
  string x = "";
	x = s.substr(0, n-1);
	string y = "";
	y = s.substr(1,n);
	int i = 2;
	n -= 1;
	while(x != y){
		
		x = s.substr(0, n-1);
		y = s.substr(i,s.size());
		--n;
		++i;
	}
	
    return x.size();
	
}
int main(){ 

  cout << solve() << "\n";
	return 0;
}
