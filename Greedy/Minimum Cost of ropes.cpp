// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

long long minCost(long long arr[], long long n) {
    long long ans=0;
    priority_queue<long long, vector<long long>, greater<long long>>heap;
    for(int i=0; i<n; ++i){
        heap.push(arr[i]);
    }
    while(heap.size()>1){
        long long x=heap.top();
        heap.pop();
        x+=heap.top();
        heap.pop();
        heap.push(x);
        ans+=x;
    }
    return ans;
}
