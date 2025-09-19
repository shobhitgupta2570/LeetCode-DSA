// class Spreadsheet {
//     vector<vector<int>> ss;
// public:
//     Spreadsheet(int rows) {
//         ss.assign(26, vector<int>(rows, 0));
//     }
    
//     void setCell(string cell, int value) {
//         int row = cell[0] - 'A';
//         int col = stoi(cell.substr(1)) -1;
//         ss[row][col] = value;
//     }
    
//     void resetCell(string cell) {
//         int row = cell[0] - 'A';
//         int col = stoi(cell.substr(1)) -1;
//         ss[row][col] = 0;
//     }
    
//     int getValue(string formula) {
//         string s = formula.substr(1);
//         int plus = s.find('+');
//         string left = s.substr(0,plus);
//         string right = s.substr(plus+1);
//         return solve(left) + solve(right);
//     }

//     int solve(string value){
//         if(isdigit(value[0])) return stoi(value);
//         int row = value[0]-'A';
//         int col = stoi(value.substr(1))-1;
//         return ss[row][col];
//     }
// };