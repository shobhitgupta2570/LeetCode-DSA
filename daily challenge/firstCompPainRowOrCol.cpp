// class Solution {
// public:
//     int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
//         int rowM = mat.size();
//         int colM = mat[0].size();
//         int n = arr.size();
//         unordered_map <int,int> mp(n);
//         for(int i=0; i<n; i++){
//             mp[arr[i]] = i;
//         }
//         int result = INT_MAX;

//         for(int row=0; row<rowM; row++){
//             int maxI = INT_MIN;
//             for(int col=0; col<colM; col++){
//                 int val = mat[row][col];
//                 maxI = max(mp[val], maxI);
//             }
//             result = min(result,maxI);
//         }

//         for(int col=0; col<colM; col++){
//             int maxI = INT_MIN;
//             for(int row=0; row<rowM; row++){
//                 int val = mat[row][col];
//                 maxI = max(mp[val], maxI);
//             }
//             result = min(result,maxI);
//         }

//         return result;
//     }
// };