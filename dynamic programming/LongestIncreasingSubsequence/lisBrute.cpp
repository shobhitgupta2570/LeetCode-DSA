// class Solution {
// public:

//     int f(int i, int prev, int n, vector<int>& nums){
//         if(i==n) return 0;

//         int notTake = 0+ f(i+1,prev,n,nums);
//         int take = 0;
//         if(prev == -1 || nums[i]>nums[prev]){
//             take =  1+f(i+1,i,n,nums);
//         }

//         return max(take,notTake) ;

//     }

//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         return f(0,-1,n,nums);
//     }
// };
