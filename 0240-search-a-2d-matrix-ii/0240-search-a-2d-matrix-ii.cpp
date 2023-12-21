class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startRow = 0;
        int endCol = col -1;
        
        while( startRow < row && endCol >= 0 ){
            
            int index = matrix[startRow][endCol];
            
            if(index == target){
                return 1;
            }
            
            if(index < target){
                startRow++;
            }else{
                endCol--;
            }
        }
        
        return 0;
    }
    
    
};