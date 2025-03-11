// class Solution {
//     public:
//         int numberOfSubstrings(string s) {
//             int n= s.length();
//             int left=0 , right=0, cntA=0, cntB=0, cntC=0, ans=0;
//             while(right<n){
//                 char ch = s[right];
//                 if(ch == 'a') cntA++;
//                 else if(ch == 'b') cntB++;
//                 else cntC++;
    
//                 while(cntA && cntB && cntC){
//                     ans = ans+n-right;
//                     char st = s[left];
//                     if(st == 'a') cntA--;
//                     else if(st == 'b') cntB--;
//                     else cntC--;
//                     left++;
//                 }
//                 right++;
//             }
//             return ans;
//         }
//     };