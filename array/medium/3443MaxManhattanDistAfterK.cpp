// class Solution {
// public:

//     int count(int d1,int d2, int d3){
//         return abs(d1-d2) + d3*2;
//     }

//     int maxDistance(string s, int k) {
//         int N=0, S=0, E=0, W=0, ans=0;

//         for(int i=0; i<s.length(); i++){
//             if(s[i]=='N') N++;
//             else if(s[i]=='S') S++;
//             else if(s[i]=='E') E++;
//             else W++;

//             int dist = min({N,S,k});
//             int dist2 = min({E,W,k-dist});
//             ans = max(ans, count(N,S,dist)+count(E,W,dist2));
//         }
//         return ans;
//     }
// };