#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
   
    if(size == 0){
        return 0;
    }
    if(size ==1){
        return arr[0];
    }
    else{
        int remaining   = sumofarray(arr+ 1,size-1);
        int sum = arr[0] + remaining;
        return sum;
    }

    
}
int main(){
    int arr[4] = {1,5,7,8};
    int size = 4;
    int ans = sumofarray(arr,size);
    cout << "sum of array is " << ans << endl;
    return 0;

}