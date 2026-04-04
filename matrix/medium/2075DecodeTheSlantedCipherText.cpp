class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.size();
        if (n == 0) return "";
        
        int cols = n / rows;
        string result;
        
        // Traverse diagonals starting from each column in the first row
        for (int startCol = 0; startCol < cols; ++startCol) {
            int i = 0, j = startCol;
            while (i < rows && j < cols) {
                result.push_back(encodedText[i * cols + j]);
                ++i;
                ++j;
            }
        }
        
        // Remove trailing spaces
        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        
        return result;
    }
};
