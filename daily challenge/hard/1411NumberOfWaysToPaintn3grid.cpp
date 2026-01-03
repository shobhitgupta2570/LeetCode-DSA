#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfWays(int n) {
        const long MOD = 1e9 + 7;
        long type010 = 6, type012 = 6; // base case for n=1

        for (int i = 2; i <= n; i++) {
            long new010 = (type010 * 3 + type012 * 2) % MOD;
            long new012 = (type010 * 2 + type012 * 2) % MOD;
            type010 = new010;
            type012 = new012;
        }

        return (type010 + type012) % MOD;
    }
};
