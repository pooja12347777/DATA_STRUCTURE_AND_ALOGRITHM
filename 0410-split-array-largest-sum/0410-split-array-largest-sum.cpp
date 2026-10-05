class Solution {
public:
int countstudent(vector<int>&arr,int pages){
    int student = 1;
     long long pagesstudent = 0;
     for(int i =0;i<arr.size();i++){
        if(pagesstudent + arr[i] <= pages){
            pagesstudent += arr[i];
        }
        else{
            student +=1;
            pagesstudent = arr[i];
        }
     }
     return student;
}
int findpages(vector<int>&arr,int n, int m){
    if(m>n){
        return -1;
    }
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(), arr.end(),0);
    while(low<=high){
        int mid = (low+high)/2;
        int student = countstudent(arr,mid);
        if(student>m){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findpages(nums,nums.size(),k);


        
    }
};