#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    void transpose(vector<vector<int>>&matrix){
        
        int n = matrix.size();
        for(int row = 0; row<n; row++){
            for(int col = row+1; col<n; col++){
                // while(col>row){
                swap(matrix[row][col],matrix[col][row]);
                
                // }
                
            }
        
        }
        }

    };
    int main() {
    int nrow, mcol;

    cout << "Enter number of rows: ";
    cin >> nrow;

    cout << "Enter number of columns: ";
    cin >> mcol;

    vector<vector<int>> arr(nrow, vector<int>(mcol));

    cout << "Enter matrix:\n";
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cin >> arr[i][j];
        }
    }

    Solution obj;
    obj.transpose(arr);

    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
