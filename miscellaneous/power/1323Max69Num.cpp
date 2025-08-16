// int maximum69Number (int num) {
//         // Convert the number to string for easy manipulation
//         string numStr = to_string(num);

//         // Iterate over each character
//         for (int i = 0; i < numStr.size(); ++i) {
//             if (numStr[i] == '6') {
//                 numStr[i] = '9';  // Change the first '6' to '9' and break
//                 break;
//             }
//         }

//         // Convert the string back to integer and return
//         return stoi(numStr);
//     }