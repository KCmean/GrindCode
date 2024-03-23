class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rowCheck(9, vector<bool>(9, false));
        vector<vector<bool>> colCheck(9, vector<bool>(9, false));
        vector<vector<bool>> subBoxCheck(9, vector<bool>(9, false));

        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                char currentChar = board[row][col];
              
                if (currentChar == '.') continue;

                int num = currentChar - '0' - 1;

                int subBoxIndex = (row / 3) * 3 + (col / 3);

                if (rowCheck[row][num] || colCheck[col][num] || subBoxCheck[subBoxIndex][num]) {
                    return false;
                }

                rowCheck[row][num] = true;
                colCheck[col][num] = true;
                subBoxCheck[subBoxIndex][num] = true;
            }
        }

        return true;
    }
};
