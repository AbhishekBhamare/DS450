#include<bits/stdc++.h>

using namespace std; 

bool solve(){
  string s;
  cin>>s;

  int x = 0,y = s.size()-1;
  int cnt = 0;
  while(x<y){
    
    if(s[x]==s[y]){
      cnt++;
    }
    x++;
    y--;
  }
  
  if(cnt == s.size()/2){return true;}

  return false;
}  
int main()
{
 if(solve()==true){cout<<"YES";}
 else{cout<<"NO";}
 return 0; 
}
