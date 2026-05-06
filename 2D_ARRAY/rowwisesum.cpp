#include <iostream>
using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{5,9,7},{2,7,9}};
//     int sum = arr[1][0]+arr[1][1]+arr[1][2];
//     cout << sum;
//     return 0;

// }
void Printsum(int arr[3][3],int row,int col){
    cout <<"printing the sum"<< endl;
    for(int row= 0; row<3; row++){
        int sum = 0;
        for(int col= 0; col<3; col++){
            sum+= arr[row][col];
        }
        cout<< sum<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[3][3];
    cout<< "enter the elements "<< endl;
    for(int row= 0; row<3; row++){
        for(int col= 0; col<3; col++){
            cin >> arr[row][col];
}
    }
     cout<<" printing the array" << endl;
     for(int row= 0; row<3; row++){
        for(int col= 0; col<3; col++){
            cout << arr[row][col] << " ";
        }
        cout  << endl;
     }
     Printsum(arr, 3, 3);

     return 0;
}
