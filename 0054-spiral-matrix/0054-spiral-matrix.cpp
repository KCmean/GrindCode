class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> ans;


        int count = 0;
        int total = rows*cols;

        int startRow = 0;
        int startCol = 0;
        int endRow = rows-1;
        int endCol = cols-1;


        while(count < total){


            for(int index = startCol; count < total && index <= endCol; index++  ){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            for(int index = startRow; count < total &&  index <= endRow ; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }

            endCol--;

            for(int index = endCol; count < total &&  index >= startCol; index-- ){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            for(int index = endRow; count < total && index >= startRow; index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;


        }

        return ans;
    }
};