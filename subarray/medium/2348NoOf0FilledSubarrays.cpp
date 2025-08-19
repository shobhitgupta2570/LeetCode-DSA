// class Solution {
// public:
//     long long zeroFilledSubarray(vector<int>& nums) {
//         int n= nums.size();
//         long long cnt=0, ans=0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0) cnt++;
//             else{
//                 ans=ans + cnt*(cnt+1)/2;
//                 cnt=0;
//             }
//         }
//         if(nums[n-1]==0) ans=ans + cnt*(cnt+1)/2;
//         return ans;
//     }
// };