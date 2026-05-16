#include <iostream>
using namespace std;



int binarysearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while( start <= mid){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            // serch in left side
            end = mid - 1; 
        }
        else{
            start = mid + 1;
            // search in right side of the mid element
        }
        // update the mid 
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[7] = {3,4,5,6,7,8,9};
    int evenindex = binarysearch(even ,  8,7);
    
    cout << "index of 7 is" << evenindex << endl;
    int oddindex = binarysearch(odd,7,9);
    cout << "index of 9 is" << oddindex << endl;
    return 0;
}
