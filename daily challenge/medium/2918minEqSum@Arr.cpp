// class Solution {
// public:
//     long long minSum(vector<int>& nums1, vector<int>& nums2) {
//         long long sum1 = 0, sum2 = 0;
//         int  zero1 = 0, zero2 = 0;
//         for(auto num:nums1){
//             sum1 += num;
//             if(num == 0){
//                 sum1++;
//                 zero1++;
//             }
//         }
//         for(auto num:nums2){
//             sum2 += num;
//             if(num == 0){
//                 sum2++;
//                 zero2++;
//             }
//         }
//         if( (zero1 == 0 && sum2>sum1) || (zero2 == 0 && sum1>sum2) ) return -1;
//         return max(sum1,sum2);
//     }
// };