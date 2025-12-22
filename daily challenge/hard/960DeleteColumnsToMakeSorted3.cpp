class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int m = A.size();        // rows
        int n = A[0].size();     // columns
        
        vector<int> dp(n, 1);
        int best = 1;

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {
                bool ok = true;
                
                // check all rows
                for (int r = 0; r < m; r++) {
                    if (A[r][i] > A[r][j]) {
                        ok = false;
                        break;
                    }
                }
                
                if (ok) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
            best = max(best, dp[j]);
        }

        return n - best;
    }
};
