class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        // Build graph: value -> indices
        unordered_map<int, vector<int>> graph;
        for (int i = 0; i < n; i++) {
            graph[arr[i]].push_back(i);
        }

        unordered_set<int> curs{0};       // frontier from start
        unordered_set<int> other{n - 1};  // frontier from end
        unordered_set<int> visited{0, n - 1};

        int step = 0;

        while (!curs.empty()) {
            // Always expand smaller frontier
            if (curs.size() > other.size()) {
                swap(curs, other);
            }

            unordered_set<int> nex;

            for (int node : curs) {
                // Same value neighbors
                for (int child : graph[arr[node]]) {
                    if (other.count(child)) return step + 1;
                    if (!visited.count(child)) {
                        visited.insert(child);
                        nex.insert(child);
                    }
                }
                // Clear to avoid redundant search
                graph[arr[node]].clear();

                // Neighbors: node-1, node+1
                if (other.count(node + 1) || other.count(node - 1)) {
                    return step + 1;
                }
                if (node + 1 < n && !visited.count(node + 1)) {
                    visited.insert(node + 1);
                    nex.insert(node + 1);
                }
                if (node - 1 >= 0 && !visited.count(node - 1)) {
                    visited.insert(node - 1);
                    nex.insert(node - 1);
                }
            }

            curs = nex;
            step++;
        }

        return -1;
    }
};
