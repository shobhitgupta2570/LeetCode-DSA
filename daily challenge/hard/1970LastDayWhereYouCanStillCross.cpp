#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canCross(int row, int col, vector<vector<int>>& cells, int day) {
        vector<vector<int>> grid(row, vector<int>(col, 0));
        
        // Mark flooded cells up to 'day'
        for (int i = 0; i < day; i++) {
            grid[cells[i][0]-1][cells[i][1]-1] = 1;
        }
        
        queue<pair<int,int>> q;
        vector<vector<int>> visited(row, vector<int>(col, 0));
        
        // Start BFS from all land cells in the top row
        for (int j = 0; j < col; j++) {
            if (grid[0][j] == 0) {
                q.push({0, j});
                visited[0][j] = 1;
            }
        }
        
        vector<int> dirs = {0,1,0,-1,0};
        
        while (!q.empty()) {
            auto [x, y] = q.front(); q.pop();
            if (x == row-1) return true; // reached bottom
            
            for (int d = 0; d < 4; d++) {
                int nx = x + dirs[d];
                int ny = y + dirs[d+1];
                if (nx >= 0 && ny >= 0 && nx < row && ny < col &&
                    !visited[nx][ny] && grid[nx][ny] == 0) {
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
        return false;
    }
    
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int left = 1, right = cells.size(), ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canCross(row, col, cells, mid)) {
                ans = mid;
                left = mid + 1; // try later days
            } else {
                right = mid - 1; // try earlier days
            }
        }
        return ans;
    }
};
