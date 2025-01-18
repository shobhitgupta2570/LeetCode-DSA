// class Solution {
// public:
//     int maxAdjacentDistance(vector<int>& nums) {
//         int n= nums.size();
//         if(n<2) return 0;
//         int maxi = 0;
//         for(int i=0; i<n;i++){
//             int diff = abs(nums[i]-nums[(i+1)%n]);
//             maxi = max(diff,maxi);
//         }
//         return maxi;
//     }
// };