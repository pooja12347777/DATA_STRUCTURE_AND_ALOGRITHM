#include <iostream>
using namespace std;
int findelement(int arr[],int n, int k){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j =i+1; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
            swap(arr[i],arr[minIndex]);
        
    }   
        return arr[k-1];
    
}
int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
   
    int arr[100];
    cout << "enter the elements of array" << endl;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    // for(int i =0; i<n;i++)
    cout << "enter the k" << endl;
    int k;
    // for(int i =0; i<n;i++){

    cin >> k;
    int ans = findelement(arr,n,k);
    cout <<"kth smalles element is:" << ans << endl;
// }
    // findelement(arr,n,k);
    return 0;
}