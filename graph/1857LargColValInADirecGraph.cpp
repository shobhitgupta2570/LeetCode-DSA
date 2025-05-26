// class Solution {
// public:
//     int largestPathValue(string colors, vector<vector<int>>& edges) {
//         int n = colors.size();
//         vector<vector<int>> adj(n);
//         vector<int> indegree(n,0);
//         for(auto &it : edges){
//             adj[it[0]].push_back(it[1]);
//             indegree[it[1]]++;
//         }

//         queue<int> q;
        
//         for(int i=0; i<n; i++){
//             if(indegree[i]==0) q.push(i);
//         }

//         vector<vector<int>> matr(n , vector<int>(26,0));
//         int visited = 0;
//         int maxColorValue = 0;

//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             visited++;

//             int colorIndex = colors[node] - 'a';
//             matr[node][colorIndex]++;
//             maxColorValue = max(maxColorValue, matr[node][colorIndex]);

//             for(auto &v : adj[node]){
//                 for(int col=0; col<26; col++){
//                     matr[v][col] = max(matr[v][col], matr[node][col]);
//                 }
//                 indegree[v]--;
//                 if(indegree[v]==0) q.push(v);
//             }
//         }
//         if(visited<n) return -1;
//         else return maxColorValue;
//     }
// };