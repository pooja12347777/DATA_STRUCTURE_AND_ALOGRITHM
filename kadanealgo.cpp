#include<iostream>
#include<vector>
using namespace std;
int maxsubarray(vector<int>&arr){
    int sum =0;
    int maxi = arr[0];
    for(int i =0; i<arr.size();i++){
        sum = sum + arr[i];
        maxi = max(maxi,sum);
        if(sum <0)
        sum = 0;
    }
    return maxi;
};
int main(){
    vector<int>arr = {2,3,-8,7,-1,2,3};
    int ans = maxsubarray(arr);
    cout << "maximum subarray sum is" << ans << endl;
    return 0;
}