#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;
    int len1 = mid - s+1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // copy value
    int mainindexarray = s;
    for(int i =0;i<len1;i++){
        first[i]= arr[mainindexarray++];
    }
    mainindexarray = mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[mainindexarray++];
    }
    // sorting
    mainindexarray = s;
    int index1 =0;
    int index2 = 0;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainindexarray++] = first[index1++];
        }
        else{
            arr[mainindexarray++] = second[index2++];
        }
        while(index1<len1){
            arr[mainindexarray++]= first[index1++];
        }
    }
    delete[] first;
    delete[] second;



}
void meregesorted(int *arr,int s,int e){
   int mid =  (s+e)/2;
//    base case
if(s>=e){
    return ;
}
// sorted left side
meregesorted(arr,0,mid);
// sort right side
meregesorted(arr,mid+1,e);
// merege array
merge(arr,s,e);
}
int main(){
    int arr[5] = {1,7,0,4,3};
    int n = 5;
    meregesorted(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";

    }
    cout << endl;
    return 0;

}
