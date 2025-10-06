#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        // directions: up, down, left, right
        vector<pair<int, int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        
        // min-heap: stores {time/elevation, x, y}
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        
        pq.push({grid[0][0], 0, 0});
        visited[0][0] = 1;
        int ans = 0;
        
        while (!pq.empty()) {
            auto curr = pq.top(); pq.pop();
            int t = curr[0], x = curr[1], y = curr[2];
            ans = max(ans, t);  // track maximum elevation seen so far
            
            // if we reached the destination
            if (x == n - 1 && y == n - 1) return ans;
            
            for (auto [dx, dy] : dirs) {
                int nx = x + dx, ny = y + dy;
                // check boundaries and if not visited
                if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = 1;
                    pq.push({grid[nx][ny], nx, ny});
                }
            }
        }
        return ans;
    }
};
