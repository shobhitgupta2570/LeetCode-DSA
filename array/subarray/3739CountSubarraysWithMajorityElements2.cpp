class Fenwick {
    int n;
    vector<int> bit;
public:
    Fenwick(int n) : n(n), bit(n+1, 0) {}
    void update(int idx, int delta) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += delta;
    }
    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx)
            sum += bit[idx];
        return sum;
    }
};

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int offset = n + 1; // shift to handle negatives
        Fenwick fenwick(2*n + 5);
        
        int prefix = offset;
        fenwick.update(prefix, 1); // base case
        long long ans = 0;
        
        for (int x : nums) {
            prefix += (x == target ? 1 : -1);
            ans += fenwick.query(prefix - 1); // count smaller prefix sums
            fenwick.update(prefix, 1);
        }
        return ans;
    }
};
