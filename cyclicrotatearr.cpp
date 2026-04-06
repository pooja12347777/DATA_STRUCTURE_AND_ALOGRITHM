#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void rotate(vector<int>&arr,int k){
        int n = arr.size();
        vector<int>temp(n);
        
        for(int i =0;i <n ;i++){
            temp[(i+k)%n] = arr[i];
        }
        for(int i =0;i<arr.size();i++){
            arr[i]=temp[i];
        }

    }
};
int main(){
    Solution S;
    vector<int>arr = {1,2,3,4,5,6};
    int k =1;
    S.rotate(arr,k);
    for(int i=0;i <arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}