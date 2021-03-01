// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1#

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int n=a^b;
        int ans=0;
        while(n>0){
            if(n&1>0){
                ++ans;
            }
           n=n>>1;
        }
        return ans;
    }
};
