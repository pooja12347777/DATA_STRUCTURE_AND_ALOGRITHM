#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int k){
    if(size == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }else{
        bool remainingpart = linearsearch(arr+1,size-1,k);
        return remainingpart;
    }
}
int main(){
    int arr[6] = {1,2,7,8,2,0,};
    int size = 6;
    int key = 3;
    bool ans = linearsearch(arr,size,key);
    if(ans){
        cout << "present" << endl;

    }
    else{
        cout << "not present " << endl;

    }
    return 0;
}
