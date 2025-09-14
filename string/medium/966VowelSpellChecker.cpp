// class Solution {
// public:
//     bool isVowel(char c) {
//         c = tolower(c);
//         return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
//     }

//     // Transform word into "vowel insensitive lowercase"
//     string devowel(string word) {
//         for (auto &c : word) {
//             c = tolower(c);
//             if (isVowel(c)) c = '*';
//         }
//         return word;
//     }

//     vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
//         unordered_set<string> exact(wordlist.begin(), wordlist.end()); // exact match
//         unordered_map<string, string> caseInsensitive;  // lowercase -> first seen word
//         unordered_map<string, string> vowelInsensitive; // devowel(lowercase) -> first seen word

//         for (auto &w : wordlist) {
//             string lower = w;
//             transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

//             if (!caseInsensitive.count(lower)) caseInsensitive[lower] = w;
//             string dv = devowel(lower);
//             if (!vowelInsensitive.count(dv)) vowelInsensitive[dv] = w;
//         }

//         vector<string> ans;
//         for (auto &q : queries) {
//             if (exact.count(q)) { ans.push_back(q); continue; }

//             string lower = q;
//             transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
//             if (caseInsensitive.count(lower)) { ans.push_back(caseInsensitive[lower]); continue; }

//             string dv = devowel(lower);
//             if (vowelInsensitive.count(dv)) { ans.push_back(vowelInsensitive[dv]); continue; }

//             ans.push_back(""); // no match
//         }
//         return ans;
//     }
// };
