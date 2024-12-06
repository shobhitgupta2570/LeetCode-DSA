// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int lastNonZeroFoundAt = 0; // Pointer for the last non-zero element found

//         // Move all non-zero elements to the front
//         for (int current = 0; current < nums.size(); ++current) {
//             if (nums[current] != 0) {
//                 nums[lastNonZeroFoundAt] = nums[current];
//                 lastNonZeroFoundAt++;
//             }
//         }

//         // Fill the remaining positions with zeros
//         for (int i = lastNonZeroFoundAt; i < nums.size(); ++i) {
//             nums[i] = 0;
//         }
//     }
// };