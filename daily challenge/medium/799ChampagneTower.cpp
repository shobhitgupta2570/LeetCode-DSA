class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> dp(query_row + 1, 0.0);
        dp[0] = poured;

        for (int i = 0; i < query_row; ++i) {
            vector<double> next(i + 2, 0.0);
            for (int j = 0; j <= i; ++j) {
                if (dp[j] > 1.0) {
                    double excess = (dp[j] - 1.0) / 2.0;
                    next[j] += excess;
                    next[j + 1] += excess;
                }
            }
            dp = next;
        }
        return min(1.0, dp[query_glass]);
    }
};
