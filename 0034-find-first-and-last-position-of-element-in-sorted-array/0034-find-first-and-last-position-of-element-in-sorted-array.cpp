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
    vector<int> searchRange(vector<int>& nums, int target) {
       int lb = lowerBound(nums, target);

        if (lb == nums.size() || nums[lb] != target) {
            return {-1, -1};
        }

        return {lb, upperBound(nums, target) - 1};
         
        
    }
    
};