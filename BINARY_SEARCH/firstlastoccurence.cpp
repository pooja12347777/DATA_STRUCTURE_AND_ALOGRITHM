// first and last occurence of an element of an array and return -1 if the element is not present in the array
#include <iostream>
using namespace std;
int firstoccurence(int arr[], int n,int key){
    int s = 0, e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]== key){
            ans = mid;
            e =mid-1;

        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if ( key < arr[mid]){
        e = mid -1;
    }
    mid = s + (e - s)/2;
    }
    return ans;

}
int lastoccurence (int arr[], int n, int key){
    int s = 0,e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid +1;

        }
        else if (key > arr[mid]){
        s = mid + 1;
    }
    else if (key < arr[mid]){
        e = mid - 1;
    }
    mid = s + (e-s)/2;

    }
return ans;
}
int main(){
    int arr[10] = {1,2,3,4,5,5,5,5,5,6};
    int first_occurence = firstoccurence(arr,10,5);
    cout << "first occurence of 5 is " << first_occurence << endl;
    int last_occurence = lastoccurence(arr,10,5);
    cout << " last occurence of 5 is " << last_occurence << endl;
    return 0;
}


