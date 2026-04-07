#include <iostream>
using namespace std;
int findduplicate(int arr[],int n){
    int i =0,j = i+1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((arr[i]^arr[j]) == 0){
                return arr[i];



            }
            
            }
        }
        return -1;
    }

int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >>  n;
    int arr[100];
    cout << "enter the elemnts of array";
    for(int i =0;i <n ;i++){
        cin >> arr[i];
    }
        int ans = findduplicate(arr,n);
        if(ans != -1)
        cout << "duplicate element is " << ans << endl;
    else
        cout << "no duplicate found" << endl;
        
        return 0;


    
    
}