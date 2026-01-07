class Solution {
public:
    long long totalSum = 0;
    long long maxProductVal = 0;
    const int MOD = 1e9 + 7;

    // First DFS to compute total sum
    long long computeTotal(TreeNode* root) {
        if (!root) return 0;
        return root->val + computeTotal(root->left) + computeTotal(root->right);
    }

    // Second DFS to compute subtree sums and maximize product
    long long dfs(TreeNode* root) {
        if (!root) return 0;
        long long currSum = root->val + dfs(root->left) + dfs(root->right);
        long long product = currSum * (totalSum - currSum);
        maxProductVal = max(maxProductVal, product);
        return currSum;
    }

    int maxProduct(TreeNode* root) {
        totalSum = computeTotal(root);
        dfs(root);
        return maxProductVal % MOD;
    }
};
