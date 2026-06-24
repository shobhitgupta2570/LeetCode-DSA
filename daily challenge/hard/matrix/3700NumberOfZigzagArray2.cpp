class Solution {
public:
    using ll = long long;
    const int MOD = 1e9 + 7;

    // Matrix multiplication
    vector<vector<int>> mul(const vector<vector<int>>& A, const vector<vector<int>>& B) {
        int n = A.size();
        vector<vector<int>> C(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (!A[i][k]) continue;
                ll val = A[i][k];
                for (int j = 0; j < n; j++) {
                    if (B[k][j]) {
                        C[i][j] = (C[i][j] + val * B[k][j]) % MOD;
                    }
                }
            }
        }
        return C;
    }

    // Matrix exponentiation
    vector<vector<int>> power(vector<vector<int>> base, long long exp) {
        int n = base.size();
        vector<vector<int>> res(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) res[i][i] = 1;
        while (exp > 0) {
            if (exp & 1) res = mul(res, base);
            base = mul(base, base);
            exp >>= 1;
        }
        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;          // number of values
        int sz = 2 * m;             // states: (value, direction)
        
        // Build transition matrix
        vector<vector<int>> T(sz, vector<int>(sz, 0));

        for (int v = 0; v < m; v++) {
            // state (v, up): last value = l+v, must go to smaller next (down)
            for (int w = 0; w < v; w++) {
                T[v + m][w] = 1;  // (v, up) -> (w, down)
            }
            // state (v, down): last value = l+v, must go to larger next (up)
            for (int w = v + 1; w < m; w++) {
                T[v][w + m] = 1;  // (v, down) -> (w, up)
            }
        }

        // Initial vector dp[2]
        vector<ll> init(sz, 0);
        for (int a1 = 0; a1 < m; a1++) {
            for (int a2 = 0; a2 < m; a2++) {
                if (a1 == a2) continue;
                if (a2 > a1) {
                    // direction was up, so next must go down
                    init[a2 + m] = (init[a2 + m] + 1) % MOD;
                } else {
                    // direction was down, so next must go up
                    init[a2] = (init[a2] + 1) % MOD;
                }
            }
        }

        if (n == 2) {
            ll ans = 0;
            for (ll v : init) ans = (ans + v) % MOD;
            return ans;
        }

        // Raise transition matrix to power (n-2)
        vector<vector<int>> Texp = power(T, n - 2);

        // Multiply T^(n-2) * init
        vector<ll> final(sz, 0);
        for (int i = 0; i < sz; i++) {
            ll sum = 0;
            for (int j = 0; j < sz; j++) {
                sum = (sum + 1LL * Texp[i][j] * init[j]) % MOD;
            }
            final[i] = sum;
        }

        ll ans = 0;
        for (ll v : final) ans = (ans + v) % MOD;
        return (int)ans;
    }
};
