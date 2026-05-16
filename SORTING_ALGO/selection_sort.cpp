#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0; i<n;i++){
        int min_index = i;
        for(int j= i+1; j<n; j++){
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
            swap (arr[min_index],arr[i]);

        }
    }
    


}
int main() {
    int arr[6] = {1, 9, 6, 5, 3, 0};
    int n = 6;

    selectionsort(arr, n);

    cout << "Sorted array is = ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

