#include<iostream>
using namespace std;

int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid size";
        return 0;
    }

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Debug print 
    cout << "Array elements: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int ans = getsum(arr, n);
    cout << "Answer is " << ans << endl;

    delete[] arr;  // free memory

    return 0;
}
