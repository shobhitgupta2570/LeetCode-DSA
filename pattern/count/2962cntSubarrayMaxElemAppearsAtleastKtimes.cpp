// class Solution {
//     public:
//         long long countSubarrays(vector<int>& nums, int k) {
//             int start=0, n=nums.size(), maxi=nums[0];
//             long long cnt=0, ans=0;
//             for(int i=1; i<n; i++){
//                 maxi = max(maxi, nums[i]);
//             }
//             for(int end=0; end<n; end++){
//                 if(nums[end]==maxi) cnt++;
//                 while(cnt==k){
//                     if(nums[start]==maxi) cnt--;
//                     start++;
//                 }
//                 ans = ans + start;
//             }
//             return ans;
//         }
//     };