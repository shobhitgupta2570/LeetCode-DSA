// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(
//             n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
//         // int ans = f(prices, true, 0, 2, n, dp);
//         for (int i = n-1; i >= 0; i--) {
//             for (int canBuy = 1; canBuy >= 0; canBuy--) {
//                 for (int k = 1; k <= 2; k++) {
//                     int profit;
//                     // buy
//                     if (canBuy == 1) {
//                         profit = max(-prices[i] +
//                                          dp[i+1][0][k],
//                                      dp[i+1][1][k]);
//                     } 
//                     else {
//                         profit = max(
//                             prices[i] + dp[i+1][1][k-1],
//                             dp[i+1][0][k]);
//                     }
//                     dp[i][canBuy][k] = profit;
//                 }
//             }
//         }
//         return dp[0][1][2];
//     }
// };