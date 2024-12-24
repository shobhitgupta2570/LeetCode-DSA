//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(
//             n+1, vector<vector<int>>(2, vector<int>(k + 1, 0)));
//         // return f(0, 1, prices, n, k, dp);
//         int profit;
//         for (int i = n-1 ; i >= 0; i--) {
//             for (int cap = 1; cap <= k; cap++) {
//                 for (int buy = 0; buy <= 1; buy++) {
//                     if (buy == 1) {
//             dp[i][buy][cap] = max(-prices[i] + dp[i+1][0][cap],
//                          dp[i+1][1][cap]);
//                     } else {
//             dp[i][buy][cap] = max(prices[i] + dp[i+1][1][cap-1],
//                          dp[i+1][0][cap]);
//                     }
//                 }
//             }
//         }
//         return dp[0][1][k];
//     }
// };



#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int>& Arr, int n, int k) {
    // Creating a 3D DP array of size [n+1][2][k+1] initialized to 0
    vector<vector<vector<int>>> dp(n + 1,
                                    vector<vector<int>>(2, vector<int>(k + 1, 0)));

    // Loop through the stock prices from the end to the beginning
    for (int ind = n - 1; ind >= 0; ind--) {
        for (int buy = 0; buy <= 1; buy++) {
            for (int cap = 1; cap <= k; cap++) {
                if (buy == 0) { // We can buy the stock
                    dp[ind][buy][cap] = max(0 + dp[ind + 1][0][cap],
                                -Arr[ind] + dp[ind + 1][1][cap]);
                }

                if (buy == 1) { // We can sell the stock
                    dp[ind][buy][cap] = max(0 + dp[ind + 1][1][cap],
                                Arr[ind] + dp[ind + 1][0][cap - 1]);
                }
            }
        }
    }

    return dp[0][0][k];
}

int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int n = prices.size();
    int k = 2;

    cout << "The maximum profit that can be generated is " << maximumProfit(prices, n, k) << endl;
    return 0;
}

