// https://www.interviewbit.com/problems/pick-from-both-sides/

int Solution::solve(vector<int> &A, int B) {
    int sum1=0, sum2=0, mn=0;
    for(int i=0; i<A.size(); i++){
        sum1+=A[i];
    }
    int i=0, j=A.size()-B-1;    
    for(int k=i; k<=j; k++){
        sum2+=A[k];
    }
    mn=sum2, ++j;
    while(j<A.size()){
        sum2-=A[i];
        sum2+=A[j];
        mn=min(mn,sum2);
        i++;
        j++;
    }
    return sum1-mn;
}
