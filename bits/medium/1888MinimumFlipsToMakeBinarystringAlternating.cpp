class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s; // simulate rotations
        string alt1, alt2;
        
        // Build alternating patterns
        for (int i = 0; i < 2 * n; i++) {
            alt1 += (i % 2 == 0 ? '0' : '1');
            alt2 += (i % 2 == 0 ? '1' : '0');
        }
        
        int res = n, diff1 = 0, diff2 = 0;
        
        // Sliding window of size n
        for (int i = 0; i < 2 * n; i++) {
            if (t[i] != alt1[i]) diff1++;
            if (t[i] != alt2[i]) diff2++;
            
            if (i >= n) {
                if (t[i - n] != alt1[i - n]) diff1--;
                if (t[i - n] != alt2[i - n]) diff2--;
            }
            
            if (i >= n - 1) {
                res = min({res, diff1, diff2});
            }
        }
        return res;
    }
};
