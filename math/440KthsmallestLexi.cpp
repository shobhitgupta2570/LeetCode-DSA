// class Solution {

//     private:
//         int findCnt( long curr, long next, int n){
//             int numCnt = 0;
//             while(curr<=n){
//                 numCnt = numCnt + next - curr;
//                 curr = curr*10;
//                 next = next*10;
//                 next = min(next, long(n+1));
//             }
//             return numCnt;
//         }


// public:
//     int findKthNumber(int n, int k) {
//         int curr = 1;
//         k--;
//         while(k>0){
//             int cnt = findCnt(curr,curr+1,n);
//             if(cnt<=k){
//                 curr = curr+1;
//                 k = k-cnt;
//             }else{
//                 curr=curr*10;
//                 k--;
//             }
//         }
//         return curr;
//     }
// };