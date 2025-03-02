// class Solution {
//     public:
//         vector<int> transformArray(vector<int>& nums) {
//             int n = nums.size();
//             for(int i=0; i<n; i++){
//                 if(nums[i]%2 == 0){
//                     nums[i] = 0;
//                 }
//                 else nums[i] = 1;
//             }
//             int start = 0;
//             int fZero = 0;
//             for(int i=0; i<n; i++){
//                 if(nums[i]==0){
//                     fZero = i;
//                     break;
//                 }
//             }
    
//             for(int i=fZero ; i<n; i++){
//                 if(nums[i] == 0){
//                     int temp = nums[start];
//                     nums[start] = nums[i];
//                     nums[i] = temp;
//                     start++;
//                 }
//             }
//             return nums;
//         }
//     };