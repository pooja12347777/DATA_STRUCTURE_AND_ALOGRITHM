 #include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    void rotate(vector<vector<int>>&matrix){
        int row = 0;
        int n = matrix.size();
        int col = matrix[0].size() -1;
        for( col = row+1; col<n;col++){
            for(row = 0;row<n-1;row++ ){
                swap(matrix[col][row],matrix[row][col]);
            }

        }
        for(int col = 0; col <n-1; col++){
            int start =0, end = matrix[0].size() -1;
            while(start < end){
                swap(matrix[col][start],matrix[col][end]);
                start++;
                end--;
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

    cout << "Enter matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cin >> arr[i][j];
        }
    }
    cout<<" printing the matrix" << endl;
     for(int i= 0; i<nrow; i++){
        for(int j= 0; j<mcol; j++){
            cout << arr[i][j] << " ";
        }
        cout  << endl;
     }

    Solution obj;
    obj.rotate(arr);

    cout << "rotated by right angle anticlockwise matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

