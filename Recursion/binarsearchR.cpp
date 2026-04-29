#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }
    
    int mid = s +(e-s)/2;
    if(arr[mid] == k){
        return true;
    }

    
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);

    }
    }
    int main(){
        int arr[7] = {0,2,4,6,8,9,99};
        int size = 7;
        int key = 7;
       int ans =  binarysearch(arr,0,size-1,key);
       if(ans){
         cout << "present " << endl;
       }else{
        cout << "not present" << endl;
       }
         return 0;
    }
        
    
