class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = 1 << k;  // total possible binary codes of length k
        if (s.size() < n + k - 1) return false;

        vector<bool> seen(n, false);
        int window = 0;
        int mask = n - 1;

        // Initialize first (k-1) bits
        for (int i = 0; i < k - 1; i++) {
            window = (window << 1) | (s[i] - '0');
        }

        // Sliding window
        for (int i = k - 1; i < s.size(); i++) {
            window = ((window << 1) | (s[i] - '0')) & mask;
            seen[window] = true;
        }

        // Check if all codes are seen
        for (bool code : seen) {
            if (!code) return false;
        }
        return true;
    }
};
