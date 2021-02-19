#include<bits/stdc++.h>
 
using namespace std; 
#define vt vector
#define pb push_back
 

int count(char x,int t,string s){
  int cnt=1;
  for(int i=t+1;i<s.size();i++){
     if(s[i]==x){
       cnt++;
     }
  }
  return cnt;
}

void solve(){
  
  string s;
  cin>>s;
  unordered_set<int>t;
  for(int i=0;i<s.size();i++){
    if(count(s[i],i,s)>1 && t.find(s[i])==t.end()){
      t.insert(s[i]);
      cout<<s[i]<<" "<<count(s[i],i,s)<<endl;
    }
  }
  
}
int main()
{
 solve();
 return 0; 
}
