// class Solution {
// public:
//     int subarraySum(vector<int>& nums) {
//         int n = nums.size();
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             for(int start=max(0,i-nums[i]); start<=i; start++){
//                 sum = sum + nums[start];
//             }
//         }
//         return sum;
//     }
// };