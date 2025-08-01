// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<int> prev,curr;
//         vector<vector<int>> ans;
//         for(int j=0; j<numRows; j++){
//          curr.clear();
//         for(int i=0; i<=prev.size(); i++){
//             if(i == 0 || i == prev.size()) curr.push_back(1);
//             else curr.push_back(prev[i]+prev[i-1]);
//         }
//         ans.push_back(curr);
//         prev=curr;
//     }
//     return ans;

//     }
// };