// class Solution {
//     private:
//         void f(int k, int target,  vector<int>& ds,vector<vector<int>>& ans, int start){
//             if(k==0 && target==0){
//                 ans.push_back(ds);
//                 return;
//             }
//             if(k==0 || target<0) return;
//             for(int i = start; i<=9; i++){
//                 ds.push_back(i);
//                 f(k-1,target-i,ds,ans,i+1);
//                 ds.pop_back();
//             }
//         }
    
//     public:
//         vector<vector<int>> combinationSum3(int k, int n) {
//             vector<int> ds;
//             vector<vector<int>> ans;
//             f(k, n, ds, ans, 1);
//             return ans;
//         }
//     };