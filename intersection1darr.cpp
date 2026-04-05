#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> intersection(vector<int>&arr1, vector<int>&arr2){
        vector<int>ans;
        int i=0,j=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] <arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};
int main(){
    Solution S;
    vector<int>arr1 = {1,3,5,6,7};
    vector<int>arr2 = {1,2,4,7,8};
    vector<int>ans = S.intersection(arr1,arr2);
     for(int i =0;i < ans.size();i++){
         cout << ans[i] << " ";

     }
    cout << endl;
    return 0;

}
