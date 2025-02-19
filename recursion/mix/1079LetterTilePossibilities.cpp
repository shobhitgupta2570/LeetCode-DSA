// class Solution {
//     private:
//         int backTrack(vector<int>& freq){
//             int cnt = 0;
//             for(int i=0; i<26; i++){
//                 if(freq[i]>0){
//                     freq[i]--;
//                     cnt = cnt + 1 + backTrack(freq);
//                     freq[i]++;
//                 }
//             }
//             return cnt;
//         }
    
//     public:
//         int numTilePossibilities(string tiles) {
//             vector<int> freq(26,0);
//             for(auto it : tiles){
//                 freq[it - 'A']++;
//             }
//             return backTrack(freq);
//         }
//     };