// class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         if(nums[0]<k) return -1;
//         int cnt = 1;
        
//         for(int i = 1; i<nums.size(); i++){
//             if(nums[i] != nums[i-1]){
//                 cnt++;
//             }
//         }

//         if(nums[0] == k){
//             cnt = cnt-1;
//         }

//         return cnt;
//     }
// };