#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int s =0;
        int e =  n-1;
        int ans =n;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(arr[mid]==target){
               ans = mid;
               e = mid-1;
            }
            else if (target>arr[mid]){
              
                s = mid+1;
                
            
                }
                else if (target < arr[mid]){
                      ans = mid;
                    e = mid-1;
                }
                mid = s+(e-s)/2;
            }
            
            
        
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> arr = {2, 4, 6, 8};
    int target = 5;

    cout << obj.lowerBound(arr, target) << endl;  // Expected: 2
    return 0;
}