// https://www.interviewbit.com/problems/remove-consecutive-characters/

string Solution::solve(string A, int B) {
    string ans="";
    for(int i=0; i<A.size(); i++){
        int cnt=1;
        int temp=B;
        while(temp--){
            if(A[i]==A[i+1]){
                ++cnt;
            }
            else{
                break;
            }
            ++i;
        }
        if(cnt!=B){
            ans+=A[i];
        }
    }
    return ans;
}
