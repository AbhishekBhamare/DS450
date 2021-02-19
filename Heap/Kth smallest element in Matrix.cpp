// GFG -: https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  priority_queue<int>heap;
  for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
          heap.push(mat[i][j]);
          if(heap.size()>k){
              heap.pop();
          }
      }
  }
  return heap.top();
}
