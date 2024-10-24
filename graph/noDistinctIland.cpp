// class Solution {
//   public:
  
//     void solve(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& isVisited,
//     vector<pair<int,int>>& ans, int row0, int col0){
//         int n = grid.size();
//         int m = grid[0].size();
//         isVisited[row][col] = 1;
//         ans.push_back({row-row0,col-col0});
//         int rowD[] = {1,0,-1,0};
//         int colD[] = {0,-1,0,1};
//         for(int i = 0; i<4; i++){
//             int nrow = row+rowD[i];
//             int ncol = col+colD[i];
//             if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && 
//             grid[nrow][ncol] == 1 && !isVisited[nrow][ncol]){
//                 // ans.push_back({nrow-row0, ncol-col0}); 
//                 solve(grid,nrow,ncol,isVisited,ans,row0,col0);
//             }    
//         }
//     }
  
//     int countDistinctIslands(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> isVisited(n, vector<int>(m,0));
//         set<vector<pair<int,int>>> st;
//         for(int i=0; i<n ; i++){
//             for(int j = 0; j<m ; j++){
//                 if(isVisited[i][j] !=1 && grid[i][j] == 1 ){
//                     vector<pair<int,int>> ans;
//                     // ans.push_back({i,j});
//                     solve(grid,i,j,isVisited,ans,i,j);
//                     st.insert(ans);
//                 }
//             }
//         }
//         return st.size();
//     }
// };