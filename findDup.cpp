/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one duplicate number in nums, return this duplicate number

Follow-ups:

How can we prove that at least one duplicate number must exist in nums? 
Can you solve the problem without modifying the array nums?
Can you solve the problem using only constant, O(1) extra space?
Can you solve the problem with runtime complexity less than O(n2)?
*/

#include<bits/stdc++.h>

using namespace std;

void solve(){   // USING PIGEONHOLE PRINCIPLE
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
     
    if(n == 1){cout<<"1"<<endl; return;}
    if(arr[0]==0){cout<<"-1"<<endl; return;}  

    int low = 1;
    int high = n;

    while(low<high){
      
     int mid = (low + high)/2;
     int cnt  = 0;

     for(int i:arr){
       if(i<=mid) cnt++;
     }
     if(cnt<=mid){

         low = mid+1;
     }
     else{

      high = mid;
     }

    }
   cout<<low<<endl;
}
int main()
{
  solve();
  return 0;
}
