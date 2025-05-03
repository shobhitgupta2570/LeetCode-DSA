// class Solution {
//     public:
    
//         int check(int x, vector<int>& tops, vector<int>& bottoms){
//             int upCnt = 0, downCnt = 0;
//             for(int i=0; i<tops.size(); i++){
//                 if(tops[i] != x && bottoms[i] != x){
//                     return -1;
//                 }
//                 else if(tops[i] != x) upCnt++;
//                 else if(bottoms[i] != x) downCnt++;
//             }
//             return min(upCnt,downCnt);
//         }
    
//         int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
//             int up = tops[0], down = bottoms[0];
//             int ans = check(up,tops, bottoms);
//             if(ans == -1){
//                 ans = check(down, tops, bottoms);
//             }
//             return ans;
//         }
//     };