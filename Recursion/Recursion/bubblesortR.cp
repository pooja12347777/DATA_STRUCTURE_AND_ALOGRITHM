#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i = 1 ; i < n;i++){
    bool swapped = false;
    for(int j = 0 ; j < n-i;j++){
        if (arr[j] > arr[ j+ 1 ]){
            swap(arr[j],arr[ j + 1]);
            swapped = true;

        }
    
    
    }
    if (swapped == false){
        break;
    }
    }
    }
    int main() {
    int arr[6] = {1, 9, 6, 5, 3, 0};
    int n = 6;

    bubblesort(arr, n);

    cout << "Sorted array is = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


