// class Solution {
// public:
//     string largestGoodInteger(string num) {
//         char digit = '\0';
//         for(int i=0; i<=num.size()-3; i++){
//             if(num[i] == num[i+1] && num[i+1] == num[i+2]){
//                 digit = max(digit, num[i]);
//             }
//         }
//         return digit == '\0' ? "" : string(3,digit);
//     }
// };