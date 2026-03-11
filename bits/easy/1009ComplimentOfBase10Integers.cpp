class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1; // Special case
        int mask = 1;
        while (mask < n) {
            mask = (mask << 1) + 1; // Build mask with all 1s
        }
        return mask ^ n; // XOR flips the bits
    }
};
