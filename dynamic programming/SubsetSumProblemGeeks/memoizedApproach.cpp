// class Solution {
//  private:
//     bool f(vector<int>& arr, int target, int i, vector<vector<int>>& dp){
//         if(target == 0) return true;
//         if(i==arr.size()){
//             return target == 0;
//         }
//         if(dp[i][target] != -1) return dp[i][target];
//         bool take = false;
        
//         if(arr[i]<=target){
//            take = f(arr,target-arr[i],i+1,dp);
//         }
//         bool notTake = f(arr,target,i+1,dp);
        
//         return dp[i][target] = (take || notTake);
//     }
    
//   public:
//     bool isSubsetSum(vector<int>& arr, int target) {
//         vector<vector<int>> dp(arr.size(),vector<int>(target+1,-1));
//         return f(arr,target,0,dp);
//     }
// };