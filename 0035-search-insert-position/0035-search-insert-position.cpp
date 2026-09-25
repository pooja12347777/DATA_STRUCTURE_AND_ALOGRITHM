class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {
int n = nums.size();
        int s =0;
        int  e = n-1;
        int ans = n;
          int mid = s+(e-s)/2;
          while(s<=e){
              if(target == nums[mid]){
                 ans = mid;
                  return mid;
                  s = mid+1;
              }
              else if(target>nums[mid]){
                 
                  s = mid+1;
              }
              else if (target<nums[mid]){
                   ans = mid;
                  e = mid-1;
              }
              mid = s + (e-s)/2;
          }
          return ans ;
        
    }
};