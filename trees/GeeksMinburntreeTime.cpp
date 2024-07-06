// class Solution {
//   public:
  
//     int timeToBurn(unordered_map <Node*,Node*> mpp,Node* startBurnNode){
//         int timer = 0;
//         unordered_map <Node*,int> vis;
//         queue <Node*> q;
//         q.push(startBurnNode);
//         vis[startBurnNode] = 1;
//         while(!q.empty()){
//             int flg = 0;
//             int size = q.size(); // Process all nodes at the current level
//             for (int i = 0; i < size; ++i) {
//             Node* temp = q.front();
//             q.pop();
//             if(temp->left && !vis[temp->left]){
//                 flg = 1;
//                 vis[temp->left] = 1;
//                 q.push(temp->left);
//             }
//             if(temp->right && !vis[temp->right]){
//                 flg = 1;
//                 vis[temp->right] = 1;
//                 q.push(temp->right);
//             }
//             if(mpp[temp] && !vis[mpp[temp]]){
//                 flg = 1;
//                 vis[mpp[temp]] = 1;
//                 q.push(mpp[temp]);
//             }
//             }
//             if(flg == 1){
//                 timer++ ;
//             }
            
//         }
//         return timer;
//     }
  
//     Node* bfsParennt(Node* root, int target, unordered_map <Node*,Node*> &mpp){
//         queue <Node*> q;
//         q.push(root);
//         Node* res;
//         while(!q.empty()){
//             Node* temp = q.front();
//             q.pop();
//             if(temp->data==target) res = temp;
//             if(temp->left){
//                 mpp[temp->left]=temp;
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 mpp[temp->right] = temp;
//                 q.push(temp->right);
//             }
            
//         }
//         return res;
//     }
  
//     int minTime(Node* root, int target) 
//     {
//         // Your code goes here
//         unordered_map <Node*,Node*> mpp;
        
//         Node* startBurnNode = bfsParennt(root,target, mpp);
        
//         int ans = timeToBurn(mpp,startBurnNode);
//         return ans;
//     }
// };


