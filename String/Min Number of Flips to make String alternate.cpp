//GeeksForGeeks -: https://practice.geeksforgeeks.org/problems/min-number-of-flips/0

#include<bits/stdc++.h>
using namespace std;


int solve(){
  string s;
	cin >> s;
	
	string s1 = "", s2 = "";
	for(int i=0; i<s.size(); i++){
		if(i%2 != 0){
			s1 += '0';
		}
		else{
			s1 += '1';
		}
	}
	
	for(int i=0; i<s.size(); i++){
		if(i%2 != 0){
			s2 += '1';
		}
		else{
			s2 += '0';
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i] != s1[i]){
			++cnt1;
		}
		if(s[i] != s2[i]){
			++cnt2;
		}
	}
    return min(cnt1, cnt2);
}
int main(){ 

    int tt;
    cin >> tt;
    while(tt--){
    cout << solve() << "\n";
    }
  	return 0;
}
