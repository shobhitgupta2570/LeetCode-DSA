class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; ++i) {
            if ((n >> i) & 1) {              // check if the i-th bit is set
                ans |= (1 << (31 - i));      // set the corresponding reversed bit
            }
        }
        return ans;
    }
};
