class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0, ans = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] > nums2[j]) {
                i++;  // move i forward if nums1[i] is too large
            } else {
                ans = max(ans, j - i);  // valid pair found
                j++;  // expand j to maximize distance
            }
        }
        return ans;
    }
};
