// class Solution {

// public:

//     int findIndex(string word){
//         int i=0,j=1,n=word.size();
//         while(j<n){
//             int k=0;
//             while(k<n && word[i+k] == word[j+k]) k++;
//             if(j+k<n && word[i+k]<word[j+k]){
//                 i=j;
//                 j=j+1;
//             }else j=j+1+k;
//         }
//         return i;
//     }

//     string answerString(string word, int numFriends) {
//         int n=word.size();
//         if(numFriends==1) return word;

//         int bestIndex = findIndex(word);
//         int maxLen = n+1-numFriends;
//         string ans = word.substr(bestIndex, min(maxLen,n-bestIndex));
//         return ans;
//     }
// };