// class Solution {
//     public:
//         int countSubarrays(vector<int>& nums) {
//             int n = nums.size(), left=0, right=2, cnt=0;
//             while(right<n){
//                 if((nums[left]+nums[right])*2 == (nums[left+1])){
//                     cnt++;
//                 }
//                  left++;
//                  right++;
//             }
//             return cnt;
//         }
//     };