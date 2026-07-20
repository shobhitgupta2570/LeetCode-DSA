#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;

        // Flatten grid into 1D vector
        vector<int> flat;
        for (auto &row : grid) {
            flat.insert(flat.end(), row.begin(), row.end());
        }

        // Compute effective shift
        k %= total;
        int start = total - k;

        // Rebuild shifted grid
        vector<vector<int>> result(m, vector<int>(n));
        int idx = start;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (idx == total) idx = 0;
                result[i][j] = flat[idx++];
            }
        }
        return result;
    }
};
