// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         for(int i=1 ; i<nums.size(); i++){
//             if(nums[i]<nums[i-1] && nums[nums.size()-1]>nums[0]) return false;
//             if(count >= 2) return false;
//             if(count == 1 && nums[i]<nums[i-1]) return false;
//             if(count == 1 && nums[i]>nums[i-2]){
//                 if(nums[nums.size()-1]>nums[0]){
//                 return false;
//             }
//             }
//             if(count == 1 && nums[i]<nums[i-2]){
//                 if(nums[nums.size()-1]>nums[0]){
//                 return false;
//             }
//             }
        
//             if(nums[i]<nums[i-1]){
//                 count++;
//             };
            
//         }
//         return true;
//     }
// };