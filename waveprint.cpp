#include<iostream>
#include<vector>
using namespace std;
vector<int>waveprint(vector<vector<int>>arr,int nrow,int mcol){
    vector<int>ans;
    for(int col=0;col<mcol;col++){
        if(col&1){
            // odd:->bottom to top
            for(int row = nrow-1; row>=0;row--){
                ans.push_back(arr[row][col]);

            }
        }
        else{
            //EVEN:-> top to bottom
            for(int row=0;row<nrow;row++){
                ans.push_back(arr[row][col]);
            }

        }
    }
    return ans;
}
int main(){
    int nrow, mcol;
    cout << "enter the number of rows";
    cin >> nrow;
    cout << "enter the number of column";
    cin >> mcol;
    vector<vector<int>> arr(nrow, vector<int>(mcol));
    cout << "enter the element of the matrix:" << endl;
    for(int i=0;i<nrow;i++){
        for(int j=0;j<mcol;j++){
            cin >> arr[i][j];
        }
    }
    vector<int> result = waveprint(arr,nrow,mcol);
    cout << "wave print output" << endl;
    for(int x: result){
        cout << x << " ";
    }
    return 0;

}