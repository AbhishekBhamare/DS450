class Solution {
public:
    int arr[100][100]={0};
    vector<vector<string>>ans;
    
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
          vector<string>v;
          for(int i=0; i<n; ++i){
              string temp="";
              for(int j=0; j<n; ++j){                  
                  if(arr[i][j]==1){
                      temp.push_back('Q');
                  }else{
                      temp.push_back('.');
                  }
              }
              v.push_back(temp);
           }
            ans.push_back(v);
        }
        
        for(int i=0; i<n; ++i){
            if(isSafe(row, i, n)){
                arr[row][i]=1;
                backtrack(row+1, n);              
                arr[row][i]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        backtrack(0, n);
        return ans;
    }
};
