// class Solution {
// public:

//     void f(int i,int n,vector<vector<int>>& ans, vector<int>& nums,vector<int> &ar ){
//         if(i==n){
//             ans.push_back(ar);
//             return ;
//             }
//         ar.push_back(nums[i]);
//         f(i+1,n, ans, nums, ar);
//         ar.pop_back();
//         f(i+1,n, ans , nums,ar);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> ar;
//         int n = nums.size();
//         f(0,n,ans,nums,ar);
//         return ans;
//     }