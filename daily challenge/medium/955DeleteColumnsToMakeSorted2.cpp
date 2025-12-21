class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int ans = 0;
        
        // sorted[i] means strs[i] < strs[i+1] is already confirmed
        vector<bool> sorted(n - 1, false);
        
        for (int j = 0; j < m; ++j) {
            bool needDelete = false;
            
            for (int i = 0; i + 1 < n; ++i) {
                if (!sorted[i] && strs[i][j] > strs[i+1][j]) {
                    needDelete = true;
                    break;
                }
            }
            
            if (needDelete) {
                ++ans; // delete this column
            } else {
                // update sorted relations
                for (int i = 0; i + 1 < n; ++i) {
                    if (strs[i][j] < strs[i+1][j]) {
                        sorted[i] = true;
                    }
                }
            }
        }
        
        return ans;
    }
};
