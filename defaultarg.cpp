#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i=start; i<n;i++){
        cout << arr[i] << endl;

    }
}
int main(){
    int arr[5]= {1,8,9,0,4};
    int size =5;
    print(arr,size);
    cout << endl;
    print(arr,size,3);
    cout << endl;
    return 0;
}