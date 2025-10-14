#include <vector>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int pre = 0;   // length of previous increasing run
        int cur = 0;   // length of current increasing run
        int mx = 0;    // max possible adjacent k found
        
        for (int i = 0; i < n; ++i) {
            cur++; // extend current increasing segment
            
            // If sequence breaks or reaches end
            if (i == n - 1 || nums[i] >= nums[i + 1]) {
                // two possibilities:
                // 1. split current run
                // 2. combine previous + current
                mx = max({mx, cur / 2, min(pre, cur)});
                
                pre = cur; // move current to previous
                cur = 0;   // reset for next segment
            }
        }
        
        return mx >= k;
    }
};
