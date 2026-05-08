#include <iostream>
using namespace std;
bool ispresent(int arr[][3],int target, int row, int col){
    for(int row = 0; row<3;row++){
        for(int col=0;col<3; col++){
            if(arr[row][col]== target){
                return true;
            }
        }

    }
    return false;
}
    int main(){
        int arr[3][3];
        cout << "enter the elements" << endl;
        for(int row =0;row<3;row++){
            for(int col=0;col<3;col++){
                cin >> arr[row][col];
            }
        }
        cout << "enter the element to be search" << endl;
        int target;
        cin >> target;

        if(ispresent(arr, target , 3 ,3)){
            cout<< " element is found " << endl;
            } 
            else{
                cout<< "element is not found" << endl;
            }
            return 0;
        }

    
   
