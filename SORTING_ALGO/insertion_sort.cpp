  #include<iostream>
using namespace std;

void insertionsort( int arr[],int n){
    for(int i=1;i<n;i++){
    int temp = arr[i];
    int j = i - 1;
    for(; j >= 0; j--){
        if(arr[j] > temp){
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;
    }
}
int main() {
    int arr[8] = {1,6,8,4,3,0,2,6};
    int n = 8;

    insertionsort(arr, n);

    cout << "Sorted array is = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


