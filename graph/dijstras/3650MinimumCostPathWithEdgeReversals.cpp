class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0], 2*it[2]});
        }
        vector<int> dist(n, 1e9);
        dist[0] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});

        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]){
                int wt = it.second;
                int adjNode = it.first;
                if(dis + wt < dist[adjNode]){
                    dist[adjNode] = dis+wt;
                    pq.push({dis+wt, adjNode});
                }
            }
        }
        if(dist[n-1] == 1e9) return -1;
        return dist[n-1];
    }
};