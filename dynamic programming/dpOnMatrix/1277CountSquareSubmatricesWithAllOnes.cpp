// class Solution {
// public:
//     int countSquares(vector<vector<int>>& matrix) {
//         int n = matrix.size(), m = matrix[0].size();
//         vector<vector<int>> dp(n+1, vector<int>(m+1,0));
//         int ans = 0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i==0 || j==0){
//                  dp[i][j]=matrix[i][j];
//                  ans = ans+dp[i][j];
//                 }
//                 else{
//                 if(matrix[i][j] == 1){
//                 dp[i][j] = 1 + min({dp[i-1][j] , dp[i-1][j-1] , dp[i][j-1]});
//                 ans = ans+dp[i][j];
//                 }
//                 }
//                 // ans += res;
//             }
//         }
//         return ans;
//     }
// };