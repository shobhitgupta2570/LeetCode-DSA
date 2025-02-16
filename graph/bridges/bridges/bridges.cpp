// class Solution {
//     public:
//         int timer = 1;
//         void dfs(int node, int parent, vector<vector<int>>& adj, vector<int>& vis,
//          int st[], int low[], vector<vector<int>>& ans){
//             vis[node] = 1;
//             st[node] = low[node] = timer;
//             timer++;
//             for(auto it : adj[node]){
//                 if(it == parent) continue;
//                 if(!vis[it]){
//                     dfs(it, node,adj, vis, st, low, ans);
//                     low[node] = min(low[it],low[node]);
//                     if(low[it]>st[node]){
//                         ans.push_back({node,it});
//                     }
//                 }
//                 else{
//                     low[node] = min(low[it],low[node]);
//                 }
//             }
//          }
    
//         vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
//             vector<vector<int>> adj(n);
//             for(auto it : connections){
//                 adj[it[0]].push_back(it[1]);
//                 adj[it[1]].push_back(it[0]);
//             }
//             vector<int> vis(n,0);
//             int st[n];
//             int low[n];
//             vector<vector<int>> ans;
//             dfs(0,-1,adj,vis,st,low,ans);
//             return ans;
//         }
//     };