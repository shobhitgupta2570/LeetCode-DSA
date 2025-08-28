// class Solution {
// public:
//     vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
//         int n= grid.size(), m = grid[0].size();
//         vector<vector<int>> ans;
//         map<int,vector<int>> mp;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 mp[i-j].push_back(grid[i][j]);
//             }
//         }
//         for(auto & [key,value] : mp){
//             if(key>=0) sort(value.begin(),value.end());
//             else sort(value.begin(),value.end(), greater<int>());
            
//         }
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 grid[i][j] = mp[i-j].back();
//                 mp[i-j].pop_back();
//             }
//         }

//         return grid;
//     }
// };