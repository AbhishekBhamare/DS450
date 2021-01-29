// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int i=n-2;
        while(i>=0){
            if(arr[i]<arr[i+1]){
                break;
            }
            --i;
        }
        if(i==-1){
            reverse(arr.begin(), arr.end());
            return;
        }
        else{
            int j=n-1;
            while(j>i){
                if(arr[j]>arr[i]){
                    break;
                }
                --j;
            }
            swap(arr[i],arr[j]);
            reverse(arr.begin()+i+1, arr.end());
        }
        
    }
};
