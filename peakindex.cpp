// find the peak index in mountain array
#include <iostream>
using namespace std;
int findpeak(int arr[],int n){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
    if(arr[mid] < arr[mid+1]){
        s = mid+1;
    }
    else{
        e = mid;
    }
    mid = s + (e-s)/2;
}
}
 
int main(){
    int arr[4] ={0,2,1,0};

   
    cout << "peak element is = "<< findpeak(arr,4) << endl;
    return 0;
}