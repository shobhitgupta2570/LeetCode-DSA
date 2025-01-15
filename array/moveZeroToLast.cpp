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

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int fZero = -1 ;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0){
//                  fZero = i ;
//                  break;
//             }
//         }
//         if(fZero != -1){
//         for(int i=fZero+1; i<nums.size(); i++){
//             if(nums[i]!=0){
//                 swap(nums[i],nums[fZero]);
//                 fZero++;
//             }
//         }}
//     }
// };