#include <vector>
#include <algorithm>

class UnionFind {
private:
    vector<int> parent;
public:
    UnionFind(int n) {
        parent.resize(n);
        for(int i = 0; i < n; ++i) parent[i] = i;
    }
    
    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        parent[find(x)] = find(y);
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,            vector<vector<int>>& queries) {
        vector<pair<int, int>> valueIndexPairs;
        for (int i = 0; i < n; ++i) {
            valueIndexPairs.emplace_back(nums[i], i);
        }

        sort(valueIndexPairs.begin(), valueIndexPairs.end());

        UnionFind uf(n);
        for (int i = 1; i < n; ++i) {
            int val1 = valueIndexPairs[i - 1].first;
            int idx1 = valueIndexPairs[i - 1].second;
            int val2 = valueIndexPairs[i].first;
            int idx2 = valueIndexPairs[i].second;

            if (val2 - val1 <= maxDiff) {
                uf.unite(idx1, idx2);
            }
        }

        vector<bool> res;
        for (const auto& q : queries) {
            res.push_back(uf.connected(q[0], q[1]));
        }

        return res;
    }
};

