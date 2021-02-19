#include<bits/stdc++.h>

using namespace std; 

void solve(string s, string ans){   
    if(s.length() == 0){
		if(ans.length()!=0) cout << ans << "\n";
		return;
	}  
	
	 solve(s.substr(1),ans);
	 solve(s.substr(1),ans + s[0]);
}
int main()
{
 string s;
 cin >> s;
 string ans = ""; 
 solve(s,ans);
 return 0; 
}

 
