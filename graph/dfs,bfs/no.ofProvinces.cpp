// class Solution {
// public:
//     int findCircleNum(vector<vector<int>>& adj) {
//         int V = adj.size();
//         vector<vector<int>> adjLs(V); 
        
//         // to change adjacency matrix to list 
//         for(int i = 0;i<V;i++) {
//             for(int j = 0;j<V;j++) {
//                 // self nodes are not considered
//                 if(adj[i][j] == 1 && i != j) {
//                     adjLs[i].push_back(j); 
//                     adjLs[j].push_back(i); 
//                 }
//             }
//         }
//         vector<int> vis(V,0); 
//         int cnt = 0; 
//         for(int i = 0;i<V;i++) {
//             // if the node is not visited
//             if(!vis[i]) {
//                 // counter to count the number of provinces 
//                 cnt++;
//                dfs(i, adjLs, vis); 
//             }
//         }
//         return cnt; 
        
//     }


//     void dfs(int node, vector<vector<int>>& adjLs, vector<int>& vis) {
//         // mark the more as visited
//         vis[node] = 1; 
//         for(auto it: adjLs[node]) {
//             if(!vis[it]) {
//                 dfs(it, adjLs, vis); 
//             }
//         }
//     }

// };