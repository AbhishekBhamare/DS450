// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1 

class Solution
{
    public:
    static bool compare(const Item&a, const Item&b){
        return (((double)a.value/a.weight) > ((double)b.value/b.weight));
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, compare);
        double sum=0;
        for(int i=0; i<n; ++i){
          
            if(W<arr[i].weight){
                sum+=(arr[i].value)*(double)W/arr[i].weight;
                break;
            }
            else{
                W-=arr[i].weight;
                sum+=arr[i].value;
            }
        }
        return sum;
    }
        
};
