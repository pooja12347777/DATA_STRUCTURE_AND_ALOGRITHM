#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
bool searchmatrix(vector<vector<int> >&matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = row*col-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return 1;
        }
        if(element< target){
            start = mid+1;
        }
        else
        {
            end = mid -1;
        }
        mid = start +(end - start)/2;
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
    cout << "enter target: ";
    cin >> target;

    Solution obj;
    bool found = obj.searchmatrix(arr, target);

    if (found) {
        cout << "Element found ";
    } else {
        cout << "Element NOT found ";
    }

    return 0;
}
