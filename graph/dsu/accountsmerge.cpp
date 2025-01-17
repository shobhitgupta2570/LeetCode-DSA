// class DisjointSet{
// public:
//     vector<int> rank,parent,size;

//     DisjointSet(int n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);
//         size.resize(n+1);
//         for(int i=0; i<=n; i++){
//         parent[i] = i;
//         size[i] = 1;
//     }
//     }
    

//     void unionByRank(int n1, int n2){
//         int up1 = findUParent(n1);
//         int up2 = findUParent(n2);
//         if(up1 == up2) return;
//         if(rank[up1] > rank[up2]){
//             parent[up2] = up1;
//         }
//         else if(rank[up2] > rank[up1]){
//             parent[up1] = up2;
//         }
//         else{
//             parent[up2] = up1;
//             rank[up1]++;
//         }
//     }

//     int findUParent(int node){
//         if(node == parent[node]) return node;
//         return parent[node] = findUParent(parent[node]);
//     }
// };

// class Solution {
// public:
//     vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
//         int n = accounts.size();
//         DisjointSet ds(n);
//         unordered_map<string,int> mp;
//         for(int i=0; i<n; i++){
//             for(int j=1; j<accounts[i].size(); j++){
//                 string mail = accounts[i][j];
//                 if(mp.find(mail) == mp.end()){
//                     mp[mail] = i;
//                 }else{
//                     ds.unionByRank(mp[mail],i);
//                 }
//             }
//         }

//         vector<vector<string>> ls(n);
//         for(auto it:mp){
//             string mail = it.first;
//             int node = ds.findUParent(it.second);
//             ls[node].push_back(mail);
//         }

//         vector<vector<string>> ans;
//         for(int i=0; i<n; i++){
//             if(ls[i].size()== 0) continue;
//             vector<string> temp;
//             temp.push_back(accounts[i][0]);
//         for(auto it:ls[i]){
//             temp.push_back(it);
//         }
//         sort(temp.begin()+1,temp.end());
//         ans.push_back(temp);
//         }
//         return ans;
//     }
// };