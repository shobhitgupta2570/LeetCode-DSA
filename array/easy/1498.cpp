// class Solution {
// public:
//     int numSubseq(vector<int>& nums, int target) {
//         constexpr int MOD = 1'000'000'007;
//         int n = nums.size();
//         int ans = 0;
//         vector<int> pows(n, 1);  // pows[i] = 2^i % MOD

//         // Precompute powers of 2 modulo MOD
//         for (int i = 1; i < n; ++i)
//             pows[i] = (pows[i - 1] * 2) % MOD;

//         sort(nums.begin(), nums.end());

//         int left = 0, right = n - 1;
//         while (left <= right) {
//             if (nums[left] + nums[right] <= target) {
//                 ans = (ans + pows[right - left]) % MOD;
//                 ++left;
//             } else {
//                 --right;
//             }
//         }

//         return ans;
//     }
// };
