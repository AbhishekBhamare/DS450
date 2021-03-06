#include<bits/stdc++.h>

using namespace std; 

string solve(){
  
  unordered_set<int>subSum;
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  } 
  int sum = 0;
  for(int i=0;i<n;i++){

    sum += arr[i];

    if(sum==0 || subSum.find(sum)!=subSum.end()){ // find(key) returns an iterator to the element if found, else returns an iterator pointing to the end of unordered_set.

        return "YES";             
    } 
    subSum.insert(sum);
  }
  return "NO";
}
int main()
{
  cout<<solve();
  return 0;
}
