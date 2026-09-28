#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
  int upperBound(vector<int>& arr, int target) {
          // code here
          int n = arr.size();
          int s =0;
          int  e = n-1;
          int ans = n;
            int mid = s+(e-s)/2;
            while(s<=e){
                if(target == arr[mid]){


                    s = mid+1;
                }
                else if(target>arr[mid]){

                    s = mid+1;
                }
                else if (target<arr[mid]){
                     ans = mid;
                    e = mid-1;
                }
                mid = s + (e-s)/2;
            }
            return ans;
      }
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
    int countFreq(vector<int>& arr, int target) {
        int lb = lowerBound(arr,target);
        int ub = upperBound(arr,target);
        
        
        if (lb == arr.size() || arr[lb] != target) {
                   return 0;
               }
               else{
                   return (ub-lb);
                   
               }
        
    }
};
int main() {
    vector<int> arr = {1, 2, 2, 2, 4};
    int target = 2;

    Solution obj;
    cout << obj.countFreq(arr, target) << endl;  // Output: 3

    return 0;
}
