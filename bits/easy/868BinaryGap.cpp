class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int last = -1;  // position of last '1'
        int pos = 0;    // current bit position

        while (n > 0) {
            if (n & 1) {  // check if current bit is '1'
                if (last != -1) {
                    ans = max(ans, pos - last);
                }
                last = pos;
            }
            n >>= 1;  // move to next bit
            pos++;
        }
        return ans;
    }
};
