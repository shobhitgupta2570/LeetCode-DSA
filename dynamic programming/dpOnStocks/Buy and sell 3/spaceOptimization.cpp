// class Solution {
  
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<int>> curr(2, vector<int>(3, 0));
//         vector<vector<int>> ahead(2, vector<int>(3, 0));
//         // int ans = f(prices, true, 0, 2, n, dp);
//         for (int i = n-1; i >= 0; i--) {
//             for (int canBuy = 1; canBuy >= 0; canBuy--) {
//                 for (int k = 1; k <= 2; k++) {
//                     int profit;
//                     // buy
//                     if (canBuy == 1) {
//                         profit = max(-prices[i] +
//                                          ahead[0][k],
//                                      ahead[1][k]);
//                     } 
//                     else {
//                         profit = max(
//                             prices[i] + ahead[1][k-1],
//                             ahead[0][k]);
//                     }
//                     curr[canBuy][k] = profit;
//                 }
//             }
//             ahead = curr;
//         }
//         return curr[1][2];
//     }
// };