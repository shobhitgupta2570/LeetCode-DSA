#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for (int n : nums) {
            total += divisorSum(n);
        }
        return total;
    }

private:
    int divisorSum(int n) {
        int cnt = 0, sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int j = n / i;
                if (i == j) {
                    cnt++;
                    sum += i;
                } else {
                    cnt += 2;
                    sum += i + j;
                }
                if (cnt > 4) return 0; // prune early
            }
        }
        return (cnt == 4) ? sum : 0;
    }
};
