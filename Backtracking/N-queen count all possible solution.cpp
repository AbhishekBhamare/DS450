// https://leetcode.com/problems/n-queens-ii/

class Solution {
public:
    int arr[100][100]={0};
    int ans=0;
    
    bool isSafe(int row, int col, int n){
        for(int i=0; i<row; ++i){
            if(arr[i][col])
                return false;
        }
        for(int i=0; i<col; ++i){
            if(arr[row][col])
                return false;
        }
        for(int i=row, j=col; i>=0&&j>=0; --i,--j){
            if(arr[i][j])
                return false;
        }
        for(int i=row, j=col; i>=0&&j<n; --i,++j){
            if(arr[i][j])
                return false;
        }
        return true;
    }
    
    void backtrack(int row, int n){
        if(row==n){
            ++ans;
        }
        
        for(int i=0; i<n; ++i){
            if(isSafe(row, i, n)){
                arr[row][i]=1;
                backtrack(row+1, n);
                arr[row][i]=0;
            }
        }
    }
 
    int totalNQueens(int n) {
        backtrack(0, n);
        return ans;
    }
};
