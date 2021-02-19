#include<bits/stdc++.h>

using namespace std; 

// Program to check if strings are rotations of each other or not

bool subString(string s, string s2){
   
   int x=0,y=0;
   int cnt=0;
   while(y!=s.size()){

      if(s2[x]==s[y]){
        y++;
        x++;
        cnt++;
      }
      else{
        y++;
        x=0;
        cnt=0;
      }
     if(cnt==s2.size()){return true;}
   } 

  return false;

}

int solve(){
   
  string s1,s2;
  cin>>s1>>s2;

  string s = s1+s1;

  if(subString(s,s2)==true){
     return 1;
  }

  else{

    return 0;
  }

}  
int main()
{
 if(solve()==1){cout<<"YES";}
 else{cout<<"NO";}
 return 0; 
}
