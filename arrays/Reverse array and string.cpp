#include<bits/stdc++.h>

using namespace std;

void solve_String(){
      string s; 
      cin>>s;
      int start = 0,end = s.size()-1,temp;
      while(start<end){
       
       temp = s[start];
       s[start] = s[end];
       s[end] = temp;
       start++;
       end--;
      }
     cout<<s<<endl;

}

void solve_Array(){

      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }

     int temp,start = 0,end = n-1;
     while(start<end){

      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
     }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

int main()
{
  int ch;
  scanf("%d",&ch);
  switch(ch){
    case 1: 
      solve_String();
       break;

    case 2:
      solve_Array(); 
      break;
  }
  return 0;
}
