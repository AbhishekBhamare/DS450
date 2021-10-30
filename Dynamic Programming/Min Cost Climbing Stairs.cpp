// https://leetcode.com/problems/min-cost-climbing-stairs/submissions/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int arr[10001]={0};
        int n=cost.size()-1;
        arr[n]=cost[n];
        arr[n-1]=cost[n-1];
      
        for(int i=n-2; i>=0; --i){
            arr[i]=cost[i]+min(arr[i+1], arr[i+2]);
        }
        return min(arr[0], arr[1]);
    }
};
