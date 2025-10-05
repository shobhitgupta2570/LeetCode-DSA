class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> pac(m, vector<int>(n, 0));
        vector<vector<int>> atl(m, vector<int>(n, 0));
        vector<vector<int>> ans;
        
        for (int i = 0; i < m; i++) {
            dfs(heights, pac, i, 0);          // Pacific (left)
            dfs(heights, atl, i, n - 1);      // Atlantic (right)
        }
        for (int j = 0; j < n; j++) {
            dfs(heights, pac, 0, j);          // Pacific (top)
            dfs(heights, atl, m - 1, j);      // Atlantic (bottom)
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pac[i][j] && atl[i][j]) ans.push_back({i, j});
            }
        }
        return ans;
    }

private:
    void dfs(vector<vector<int>>& h, vector<vector<int>>& vis, int i, int j) {
        int m = h.size(), n = h[0].size();
        vis[i][j] = 1;
        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        for (auto [x, y] : dirs) {
            int ni = i + x, nj = j + y;
            if (ni < 0 || nj < 0 || ni >= m || nj >= n || vis[ni][nj]) continue;
            if (h[ni][nj] < h[i][j]) continue;  // only move to higher or equal cells
            dfs(h, vis, ni, nj);
        }
    }
};
