#include<bits/stdc++.h>

using namespace std;


set<string>st;
void solve(string s, int x, int n){
   
    if(x == n-1){
		st.insert(s);
		return;
	}   
	for(int i=0; i<n; i++){
		swap(s[i], s[x]);
		solve(s, x+1, n);
		swap(s[i], s[x]);
	}  
}
void print(){
	for(auto &p: st){
		cout << p << " ";
	}
	cout << "\n";
}
int main()
{
  int tt;
  cin >> tt;
  while(tt--){ 
    string s;
    cin >> s;
  solve(s,0,s.size());
  print();
  st.clear();
  }
   return 0; 
}

 
