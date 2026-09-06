class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = 0;
        int n = matrix.size();
        int col = matrix[0].size() -1;
        for( row =0; row <n-1; row++){
            for( col = row+1; col<n;col++){
                swap(matrix[row][col],matrix[col][row]);
            }

        }
        for(row = 0; row <n; row++){
            int start =0, end = matrix[0].size() -1;
            while(start < end){
                swap(matrix[row][start],matrix[row][end]);
                start++;
                end--;
            }
        }
    }

        
    
};