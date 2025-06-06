// class Solution {
// public:

//     int findMin(unordered_map<char,int>& freq){
//         for(int i=0; i<26; i++){
//             if(freq[i+'a']) return i+'a';
//         }
//         return 'a';
//     }

//     string robotWithString(string s) {
//         string t;
//         stack<char> st;
//         unordered_map<char,int> freq(26);
//         for(char ch:s) freq[ch]++;

//         for(char ch:s){
//             st.push(ch);
//             freq[ch]--;
//             while(!st.empty() && st.top()<=findMin(freq)){
//                 t.push_back(st.top());
//                 st.pop();
//             }
//         }

//         while(!st.empty()){
//             t.push_back(st.top());
//             st.pop();
//         }

//         return t;
//     }
// };