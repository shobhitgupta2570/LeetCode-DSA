// #include <vector>
// #include <queue>
// using namespace std;

// class Solution {
// public:
//     int snakesAndLadders(vector<vector<int>>& board) {
//         int n = board.size();
//         vector<bool> visited(n * n + 1, false);
//         queue<pair<int, int>> q; // {position, moves}
//         q.push({1, 0});
//         visited[1] = true;

//         while (!q.empty()) {
//             auto [pos, moves] = q.front();
//             q.pop();

//             for (int i = 1; i <= 6; ++i) {
//                 int next = pos + i;
//                 if (next > n * n) break;

//                 auto [r, c] = getCoordinates(next, n);
//                 if (board[r][c] != -1) {
//                     next = board[r][c];
//                 }

//                 if (next == n * n) return moves + 1;

//                 if (!visited[next]) {
//                     visited[next] = true;
//                     q.push({next, moves + 1});
//                 }
//             }
//         }

//         return -1;
//     }

// private:
//     pair<int, int> getCoordinates(int num, int n) {
//         int r = (num - 1) / n;
//         int c = (num - 1) % n;
//         if (r % 2 == 1) c = n - 1 - c;
//         r = n - 1 - r;
//         return {r, c};
//     }
// };
