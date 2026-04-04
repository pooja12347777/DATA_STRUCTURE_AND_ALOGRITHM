#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
void sortnumber(vector<int>&arr){
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i =0;i<n;i++){
        if(arr[i] == 0){
            count0++;
        }
         if(arr[i] == 1){
            count1++;
    }
    else{
        count2++;
    }
     
}

    
    int idx = 0;
    for(int i =0; i <count0; i++){
        arr[idx++] = 0;
    }
    for(int i =0; i <count1; i++){
        arr[idx++] = 1;
    }
    for(int i =0; i <count2; i++){
        arr[idx++] = 2;
        
    }
}
};
    int main(){
        Solution S;
        vector<int>arr = {0,0,1,1,1,2,2,2,2,2,2};
        S.sortnumber(arr);
        for(int i=0;i <arr.size();i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;


    }