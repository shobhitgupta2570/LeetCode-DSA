// class Solution {
// public:
//     int maxDifference(string s) {
//         unordered_map<char,int> mpp;
//         int minEven = INT_MAX, maxOdd = INT_MIN;
//         for(auto& ch:s) mpp[ch]++;
//         for(auto& [_,value]:mpp){
//             if(value%2==0){
//                 minEven = min(minEven,value);
//             }else{
//                 maxOdd = max(maxOdd,value);
//             }
//         }
//         return maxOdd-minEven;
//     }
// };
