#include<iostream>
using namespace std;
void insertionsort(int *arr ,int n){
    if(n<=1){
        return;
    }
    // recursively sort first n-1 items
    insertionssort(arr,n-1);
   int  key = arr[n-1];
   int j = n-2;
   while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
    arr[j+1]=key;
   }
}
int main(){
    int arr[5] = {1,3,0,9,2};
    // int n = 5;
     insertionsort(arr,5);
     cout << "sorted array is" << endl;
    for(int i = 0;i<5;i++){
        cout << arr[i] << " ";
       
    }
     return 0;
}