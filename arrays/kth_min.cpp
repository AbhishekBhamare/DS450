/*return the kth smallest element.*/

#include<bits/stdc++.h>

using namespace std; 

int solve(int arr[],int n,int k){   // USING MAX-HEAP 
    priority_queue<int>p;
    for(int i=0;i<k;i++){
        p.push(arr[i]);
    }
    for(int i=k;i<n;i++){

      if(p.top()>arr[i]){
        p.pop();
        p.push(arr[i]);
      }
    }

    return p.top();
    
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
      cout<<solve(arr,n,k)<<endl;
  return 0;
}
