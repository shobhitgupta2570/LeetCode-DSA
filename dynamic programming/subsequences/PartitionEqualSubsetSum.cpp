// class Solution {
//     private:
//         bool f(int i, int k, vector<vector<int>>& dp, vector<int>& nums){
//             if(k==0) return true;
//             if(i==0){
//                 return k==nums[0];
//             }
    
//             if(dp[i][k] != -1) return dp[i][k];
    
//             bool notTake = f(i-1,k,dp,nums);
    
//             bool take = false;
//             if(nums[i]<=k){
//             take = f(i-1,k-nums[i],dp,nums);
//             }
    
//             return dp[i][k] = take || notTake;
//         }
    
//     public:
//         bool canPartition(vector<int>& nums) {
//             int n = nums.size();
//             int sum = 0;
//             for(int i=0; i<n; i++){
//                 sum = sum + nums[i];
//             }
//             if(sum%2 == 1) return false;
//             else{
//             int k = sum/2;
//             vector<vector<int>> dp(n,vector<int>(k+1,-1));
//             return f(n-1,k,dp,nums);
//             }
//         }
//     };