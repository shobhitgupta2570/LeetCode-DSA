#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        // Sort intervals by end ascending, start descending
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });

        int ans = 0;
        int mx = -1, secondMax = -1;

        for (auto &interval : intervals) {
            int start = interval[0], end = interval[1];

            // Case 1: both chosen numbers already cover this interval
            if (mx >= start && secondMax >= start) continue;

            // Case 2: only one number covers, add one more
            if (mx >= start) {
                ans++;
                secondMax = mx;
                mx = end;
            } 
            // Case 3: none cover, add two new numbers
            else {
                ans += 2;
                mx = end;
                secondMax = end - 1;
            }
        }
        return ans;
    }
};
