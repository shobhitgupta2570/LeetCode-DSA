class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode* node) {
        if (!node) return 0;

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1;  // left subtree not balanced

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; // right subtree not balanced

        if (abs(leftHeight - rightHeight) > 1) return -1; // current node not balanced

        return max(leftHeight, rightHeight) + 1; // return height
    }
};
