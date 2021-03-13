// https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1#

int Maximize(int arr[],int n)
{  
    long long mod=1e9+7;
    sort(arr, arr+n);
    long long ans=0;
    for(long long i=0; i<n; ++i){
        ans+=arr[i]*i;
    }
    return ans%(mod);
}
