#include<iostream>
using namespace std;
int partion(int arr[],int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    // find pivotindex
    for(int i = s+1; i<e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);
    // sort right and left parts
    int i =s,j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(j > pivot){
            j--;
        }
         while(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
    }
    
    }
        return pivotIndex;
    

}
void quicksort(int arr[],int s, int e){
    if(s>=e){
        return ;
    }
    int p = partion(arr,s,e);
    // left side sort
    quicksort(arr,s,p-1);
    // right side sort
    quicksort(arr,p+1,e);

}
int main(){
    int arr[5] = {1,0,8,5,2};
    int n = 5;
    quicksort(arr,0,n);
    for(int i =0;i<5;i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;
}