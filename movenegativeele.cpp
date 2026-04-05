#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    void movenegativeelements(vector<int>&arr){
        sort(begin(arr),end(arr));
    }
};
int main(){
    Solution S;
    vector<int>arr = {5,-9,-1,-3,10,-4,0,-6};
    S.movenegativeelements(arr);
    for(int i = 0 ; i < arr.size();i++){
        cout << arr[i] << " ";
    
    }
    cout << endl;
    return 0;
}