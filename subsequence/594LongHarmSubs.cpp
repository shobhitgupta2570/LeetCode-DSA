// class Solution {
// public:
//     int findLHS(vector<int>& nums) {
//         unordered_map<int, int> count;
//         int ans = 0;

//         // Count the frequency of each number
//         for (int num : nums)
//             ++count[num];

//         // Check for each number if there's a number +1 to form a harmonious pair
//         for (const auto& [num, freq] : count) {
//             if (count.count(num + 1)) {
//                 ans = max(ans, freq + count[num + 1]);
//             }
//         }

//         return ans;
//     }
// };
