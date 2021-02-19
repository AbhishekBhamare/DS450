#include<bits/stdc++.h>

using namespace std; 

string solve(){
  string s;
  getline(cin,s);
  int x = 0, y = s.size()-1; 
  while(x<y){
    int temp;
    temp = s[x];
    s[x] = s[y];
    s[y] = temp;
    x++;
    y--;
  }
  return s;
}  
int main()
{
 cout<<solve();
 return 0; 
}
