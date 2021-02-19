// Gfg -: https://practice.geeksforgeeks.org/problems/find-first-repeated-character/0

#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;

	vector<int> count(26, 0);

	for(int i=0; i<s.size(); i++){
	    count[s[i]-'a']++;
  		if(count[s[i]-'a'] > 1){
		  cout << s[i] << "\n";
		  return;
		}
	}
   cout << -1 << "\n";
}
int main(){

  
    int tt;
    cin >> tt;
    while(tt--){
    solve();}
	return 0;
}
