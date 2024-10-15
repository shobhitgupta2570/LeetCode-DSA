#include <bits/stdc++.h>
using namespace std;

int getAns(vector<int>& Arr, int n, int ind, int buy, int cap, vector<vector<vector<int>>>& dp) {
    // Base case
    if (ind == n || cap == 0) return 0;

    // Check if the result is already computed
    if (dp[ind][buy][cap] != -1)
        return dp[ind][buy][cap];

    int profit;

    if (buy == 0) { // We can buy the stock
        profit = max(0 + getAns(Arr, n, ind + 1, 0, cap, dp),
                     -Arr[ind] + getAns(Arr, n, ind + 1, 1, cap, dp));
    }

    if (buy == 1) { // We can sell the stock
        profit = max(0 + getAns(Arr, n, ind + 1, 1, cap, dp),
                     Arr[ind] + getAns(Arr, n, ind + 1, 0, cap - 1, dp));
    }

    // Store the result in the DP array and return
    return dp[ind][buy][cap] = profit;
}

int maximumProfit(vector<int>& prices, int n, int k) {
    // Creating a 3D DP array of size [n][2][k+1]
    vector<vector<vector<int>>> dp(n,
                                    vector<vector<int>>(2, vector<int>(k + 1, -1)));

    return getAns(prices, n, 0, 0, k, dp);
}

int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    int n = prices.size();
    int k = 2;

    cout << "The maximum profit that can be generated is " << maximumProfit(prices, n, k) << endl;
    return 0;
}








// class Solution {
// public:

//     int f(int i, int buy, vector<int>& prices, int n, int k, vector<vector<vector<int>>>& dp){
//         if(i == n || k == 0) return 0;
//         int profit;
//         if(dp[i][buy][k] != -1) return dp[i][buy][k];
//         if(buy == 1){
//         profit = max(-prices[i] + f(i+1,0,prices,n,k,dp), f(i+1,1,prices,n,k,dp));
//         }else{
//         profit = max(prices[i] + f(i+1,1,prices,n,k-1,dp), f(i+1,0,prices,n,k,dp));
//         }
//         return dp[i][buy][k] = profit;
//     }

//     int maxProfit(int k, vector<int>& prices) {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(n , vector<vector<int>>(2,vector<int>(k+1,-1)));
//         return f(0, 1, prices, n, k, dp);
//     }
// };