// class Solution {
// public:
//     vector<int> replaceNonCoprimes(vector<int>& nums) {
//         vector<int> st; // stack
//         for (int x : nums) {
//             st.push_back(x);

//             // keep merging as long as top 2 are not coprime
//             while (st.size() > 1) {
//                 int a = st.back(); st.pop_back();
//                 int b = st.back(); st.pop_back();

//                 int g = gcd(a, b);
//                 if (g == 1) {   // coprime, keep both
//                     st.push_back(b);
//                     st.push_back(a);
//                     break;
//                 } else {
//                     long long lcm = 1LL * a / g * b; // avoid overflow
//                     st.push_back((int)lcm);
//                 }
//             }
//         }
//         return st;
//     }
// };
