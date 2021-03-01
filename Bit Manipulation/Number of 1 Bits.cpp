// https://practice.geeksforgeeks.org/problems/set-bits0143/1

class Solution
{
public:
    int setBits(int N)
    {
        int ans=0;
        while(N>0){
            if(N&1>0)
               ++ans;
            
            N=N>>1;
        }
        return ans;
    }
  
  
  /* 
  Using Built-in function:-
  
  1. return __builtin_popcount(N);
  2. return bitset<32>(N).count();
  
  */
