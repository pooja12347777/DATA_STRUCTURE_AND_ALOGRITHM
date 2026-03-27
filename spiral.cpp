#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int>spiralorder(vector<vector<int>>&matrix){
        vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count =0;
        int total = row*col;
        // INDEX INITIALIZATION
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row-1;
        int endingcol = col-1;
        while(count<total){
            // print starting row ,aage bdha do 
            for(int index = startingcol; count < total && index <= endingcol; index++){
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            // print endingcol ,1 se kam kr do
            for(int index =startingrow; count <total && index <= endingrow; index++){
                ans.push_back(matrix[index][endingcol]);
                count ++;
            }
            endingcol--;
            // print endingrow
            for(int index=endingcol;count<total && index>= startingcol;index--){
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            // print startingcol
            for(int index = endingrow; count < total && index >= startingrow; index--){
                ans.push_back(matrix[index][startingcol]);
                count ++;

            }
            startingcol++;
        }
        return ans;

    }
};

int main(){
    int nrow, mcol;
    cout << "enter the number of rows";
    cin >> nrow;
    cout << "enter the number of column";
    cin >> mcol;
    vector<vector<int>> arr(nrow, vector<int>(mcol));

    cout << "enter matrix:" << endl;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < mcol; j++) {
            cin >> arr[i][j];
        }
    }

    Solution obj;
    vector<int> result = obj.spiralorder(arr);

    cout << "spiral output:\n";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}