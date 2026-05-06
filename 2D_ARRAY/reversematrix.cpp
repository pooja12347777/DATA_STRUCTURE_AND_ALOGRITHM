#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void reverse(vector<vector<int>>&matrix){
        int  n = matrix.size();
        int start = 0,end = matrix[0].size() -1;
        for(int row = 0; row<n; row++){
         while(start < end){
            swap(matrix[row][start],matrix[row][end]);
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
    obj.reverse(arr);

    cout << "reversed matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
