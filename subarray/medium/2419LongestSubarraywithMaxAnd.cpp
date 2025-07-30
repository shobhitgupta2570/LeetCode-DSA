// class Solution {
// public:
//     int longestSubarray(vector<int>& nums) {
//         int maxCnt=0, cnt=0, maxNum=0 ;
//         for(int i =0; i<nums.size(); i++){
//             if(nums[i]>maxNum){
//              maxNum = nums[i];
//              cnt = 1;
//              maxCnt = 1;
//             }
//             else if(nums[i]<maxNum) cnt=0;
//             else if(nums[i] != nums[i-1] && nums[i] == maxNum){
//                 cnt = 1;
//             }
//             else if(nums[i] == nums[i-1] && nums[i] == maxNum){
//                 cnt++;
//             }
//             maxCnt = max(maxCnt,cnt);
//         }
//         return maxCnt;
//     }
// };