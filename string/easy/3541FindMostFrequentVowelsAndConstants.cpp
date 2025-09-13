// class Solution {
// public:
//     int maxFreqSum(string s) {
//         vector<int> cnt(26,0);
//         for(auto c : s){
//             cnt[c - 'a']++;
//         }
//         int maxi1 = 0, maxi2 = 0;
//         for(int i =0; i<cnt.size(); i++){
//             if(i == 0 || i == 4 || i== 8 || i== 14 || i== 20){
//                 maxi1 = max(cnt[i],maxi1);
//             }
//             else{
//                 maxi2 = max(cnt[i],maxi2);
//             }
//         }
//         return (maxi1+maxi2);
//     }
// };