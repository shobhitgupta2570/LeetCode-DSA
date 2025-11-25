class Solution {
public:
    int smallestRepunitDivByK(int k) {
        // Repunits can only be divisible by numbers ending in 1, 3, 7, or 9
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int remainder = 0;
        for (int length = 1; length <= k; ++length) {
            remainder = (remainder * 10 + 1) % k;
            if (remainder == 0) return length;
        }
        return -1;
    }
};
