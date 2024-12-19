// class Solution {
//   private:
    
//     void inOrder(Node *root, map<int,pair<int,int>>& mp, int hd, int vd){
//         if(!root) return;
//         inOrder(root->left, mp, hd-1,vd+1);
//         if(mp.find(hd) == mp.end()){
//             mp[hd] = {vd,root->data};
//         }
//         else{
//             if(vd >= mp[hd].first) mp[hd] = {vd,root->data};
//         }
//         inOrder(root->right, mp, hd+1, vd+1);
//     }  
    
//   public:
//     vector <int> bottomView(Node *root) {
//         map<int,pair<int,int>> mp;
//         vector<int> ans;
//         int hd = 0;
//         int vd = 0;
//         inOrder(root, mp, hd, vd);
//         for(auto it : mp){
//             ans.push_back(it.second.second);
//         }
//         return ans;
//     }
// };

// optimized approach

// class Solution {
//   public:
//     vector <int> bottomView(Node *root) {
//         vector<int> ans;
//         if(root == NULL) return ans;
//         map<int,int> mp;
//         queue<pair<Node*,int>> q;
//         q.push({root,0});
//         while(!q.empty()){
//             Node* node = q.front().first;
//             int line = q.front().second;
//             q.pop();
//             mp[line] = node->data;
            
//             if(node->left != NULL){
//                q.push({node->left,line-1}); 
//             } 
//             if(node->right != NULL){
//                q.push({node->right,line+1});
//             } 
//         }
        
//         for(auto it : mp){
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };