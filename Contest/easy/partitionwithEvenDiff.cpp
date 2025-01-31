// class Solution {
// public:
//     int countPartitions(vector<int>& nums) {
//         int right = accumulate(nums.begin(),nums.end(),0);
//         int n = nums.size();
//         int left = 0;
//         int cnt = 0;
//         for(int i=0; i<n-1; i++){
//             left += nums[i];
//             right -= nums[i];
//             if((left%2==0 && right%2==0) || (left%2==1 && right%2==1)) cnt++;
//         }
//         return cnt;
//     }
// };