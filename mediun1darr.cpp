#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    double findmediansortedarrays(vector<int>&nums1,vector<int>&nums2){
        int m = nums1.size();
        int n = nums2.size();
        vector<int> temp(m+n);
        int i = 0;
        int j = 0;
        int k = 0;
        while(i<m&& j<n){
            if(nums1[i] < nums2[j]){
                temp[k++] = nums1[i++];
            }
            else{
                temp[k++] = nums2[j++];
            }
        }
        while(i < m){
            temp[k++] = nums1[i++];
        }
        while(j < n){
            temp[k++] = nums2[j++];

        }
        int size = m+n;
        if(size%2 == 1){
            return temp[size/2];
        }
        return (temp[size/2] + temp[(size/2)-1])/2.0;

    }
};
int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution obj;
    cout << obj.findmediansortedarrays(nums1, nums2);

    return 0;

}