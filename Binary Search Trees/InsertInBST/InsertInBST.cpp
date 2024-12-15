// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(!root) return new TreeNode(val);
//         TreeNode* last = new TreeNode(val);
//         TreeNode* prev = root;
//         TreeNode* curr = root;
//         while(curr != NULL){
//         if(val > curr->val){
//             prev = curr;
//             curr = curr->right;
//         }else{
//             prev = curr;
//             curr = curr->left;
//         }
//         }
//         if(prev->val < val) prev->right = last;
//         else prev->left = last;
//         return root;
//     }
// };

