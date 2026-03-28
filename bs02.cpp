// col and rowwisw sorted
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    bool search(vector<vector<int>>&matrix,int target){
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row*col - 1;
        int rowIndex = 0;
        int colIndex = col-1;
        while(rowIndex<row && colIndex >=0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return 1;

            }
            if(element < target ){
                rowIndex ++;
            }
            else{
                colIndex --;
            }
        }
        return 0;
    }
};
int main() {
    int nrow, mcol;

    cout << "enter rows: ";
    cin >> nrow;

    cout << "enter cols: ";
    cin >> mcol;

    vector<vector<int>> arr(nrow, vector<int>(mcol));

    cout << "enter matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    if (obj.search(arr, target)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;

}