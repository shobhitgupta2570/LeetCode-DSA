// class Solution {
// public:
//     vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
//         int n = mat.size() , m= mat[0].size(), inverse=1;
//         vector<int> ans;
//         map<int,vector<int>> mp;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 mp[i+j].push_back(mat[i][j]);
//             }
//         }
//         for(auto &[key,val]:mp){
//             if(inverse){
//                 reverse(val.begin(),val.end());
//             }
//             for(auto &it:val) ans.push_back(it);
//             inverse = !inverse;
//         }
//         return ans;
//     }
// };