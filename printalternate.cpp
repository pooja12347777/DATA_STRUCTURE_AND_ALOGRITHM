#include<iostream>
#include<vector>
using namespace std;


class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>ans;
        
        for(int i = 0; i< arr.size(); i+=2){
            ans.push_back(arr[i]);
        }
         return ans;    
    }
   
};
int main(){
    Solution S;
    vector<int>ans = {1,3,5,6,7};
    S.getAlternates(ans);
     for(int i =0;i < ans.size();i+=2){
         cout << ans[i] << " ";

     }
    cout << endl;
    return 0;

    
}