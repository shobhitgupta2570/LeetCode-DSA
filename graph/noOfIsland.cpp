// class Solution {
//   public:
//     void bfs(vector<vector<int>>& grid,int i,int j,int n, int m, vector<vector<int>>& isVisited){
//         queue<pair<int,int>> q;
//         isVisited[i][j] = 1;   
//         q.push({i,j});
//         while(!q.empty()){
//             int i = q.front().first;
//             int j = q.front().second;
//             q.pop();
//             for(int k=-1 ; k<=1; k++){
//                 for(int l=-1; l<=1; l++){
//                     if(i+k>=0 && i+k<n && j+l>=0 && j+l<m && !isVisited[i+k][j+l] && 
//                         grid[i+k][j+l]  != 0 ){
//                             isVisited[i+k][j+l] = 1;
//                             q.push({i+k,j+l});
//                         }
                    
//                 }
//             }
//         }
//     }
  
  
  
//     int countDistinctIslands(vector<vector<int>>& grid) {
//         // code here
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> isVisited(n,vector<int>(m,0));
//         int ans = 0;
//         for(int i=0; i<n ; i++){
//             for(int j=0; j<m; j++){
//                 if(!isVisited[i][j] && grid[i][j]==1){
//                     bfs(grid,i,j,n,m,isVisited);
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };