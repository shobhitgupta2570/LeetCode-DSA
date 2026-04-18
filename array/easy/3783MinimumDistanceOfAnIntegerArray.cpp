class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int val = n;
        while(val>0){
            int rem = val%10;
            rev = rev*10 + rem;
            val = val/10;
        }
        return abs(rev-n);
    }
};