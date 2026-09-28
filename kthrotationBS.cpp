#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int findKRotation(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        int ans = INT_MAX;
        int index =-1;
        

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[low] <= arr[high]) {
                if (arr[low] < ans) {
                     index = low;
                    ans = arr[low];
                   
                }
               break;
            }  
                if (arr[low] <= arr[mid]) {
                    if(arr[low]<ans){
                    index = low;
                    ans = arr[low];
                    } 
                    low = mid+1;
                }
                else{
                   high = mid - 1;
                   if(arr[mid]<ans){
                       index = mid;
                       ans = arr[mid];
                   }
                }
                
            
        }

        return index;
    }
};
int main() {
    vector<int> arr = {4,5,1,2,3};
    

    Solution obj;
    cout << obj.findKRotation(arr) << endl;  

    return 0;
}
