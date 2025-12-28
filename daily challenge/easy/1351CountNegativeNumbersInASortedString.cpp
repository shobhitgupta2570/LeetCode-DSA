#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        
        int row = m - 1; // start from bottom-left
        int col = 0;
        
        while (row >= 0 && col < n) {
            if (grid[row][col] < 0) {
                // all elements to the right are negative
                count += (n - col);
                row--; // move up
            } else {
                col++; // move right
            }
        }
        return count;
    }
};
