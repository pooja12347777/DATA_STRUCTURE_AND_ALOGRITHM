 #include<iostream>
 using namespace std;
 
 void selectionsort(int *arr,int n){
    if(n == 0 || n== 1){
        return ;
    }
    int i;
    int minIndex = i;
   
    for(int i = 0;i<n;i++){
         if(arr[i+1]< arr[i]){
            minIndex = arr[i+1];
            swap(arr[minIndex],arr[i]);
         }
    }
    selectionsort(arr,n-1);
}
int main(){
    int arr[3] = {1,0,5};
    int n = 3;
    selectionsort(arr,3);
    for(int i = 0;i<3;i++){
        cout << arr[i] << " ";
       
    }
    return 0;
}