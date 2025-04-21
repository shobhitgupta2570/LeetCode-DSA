// class Solution {
//     public:
//         int numberOfArrays(vector<int>& differences, int lower, int upper) {
//             int cSum = 0, maxi = 0, mini = 0;
//             for(int i=0; i<differences.size(); i++){
//                 cSum = cSum+ differences[i];
//                 maxi = max(maxi,cSum);
//                 mini = min(mini,cSum);
    
//                 if((maxi-mini)>(upper-lower)) return 0;
//             }
//             return (upper-lower)-(maxi-mini)+1;
//         }
//     };