// class Solution {
//     public:
//         long long countSubarrays(vector<int>& nums, long long k) {
//             long long ans = 0, sum =0;
//             for(int i=0,j=0; j<nums.size(); j++){
//                 sum += nums[j];
//                 while(i<=j && (j-i+1)*sum>=k){
//                     sum = sum - nums[i];
//                     i++;
//                 }
//                 ans += j-i+1;
//             }
//             return ans;
//         }
//     };