#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int f(vector<int>& prices, int canBuy, int i, int k, int n, vector<vector<vector<int>>>& dp){
        if(i >= n || k<=0) return 0;
        int profit;
        if(dp[i][canBuy][k] != -1) return dp[i][canBuy][k];
        // buy
        if(canBuy){
        profit = max(-prices[i] + f(prices, !canBuy, i+1, k, n, dp),
                     f(prices, canBuy, i+1, k, n, dp));
        }
        else{
            profit = max(prices[i]+f(prices, !canBuy, i+1, k-1, n, dp),
                        f(prices, canBuy, i+1, k,n, dp));
        }
        dp[i][canBuy][k] = profit;
        return dp[i][canBuy][k];
    }

public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        int ans = f(prices, true, 0, 2, n, dp);
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> prices = {3,3,5,0,0,3,1,4};
    cout<<s.maxProfit(prices);
    return 0;
}