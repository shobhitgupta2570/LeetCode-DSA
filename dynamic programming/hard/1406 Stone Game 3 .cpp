#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> dp(n + 1, 0); // dp[i] = max score starting at i
        vector<int> suffix(n + 1, 0);

        // Build suffix sums
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + stoneValue[i];
        }

        // DP from back to front
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = suffix[i] - dp[i + 1]; // take 1 stone
            if (i + 1 < n) dp[i] = max(dp[i], suffix[i] - dp[i + 2]); // take 2
            if (i + 2 < n) dp[i] = max(dp[i], suffix[i] - dp[i + 3]); // take 3
        }

        int alice = dp[0];
        int bob = suffix[0] - alice;
        if (alice > bob) return "Alice";
        else if (alice < bob) return "Bob";
        else return "Tie";
    }
};
