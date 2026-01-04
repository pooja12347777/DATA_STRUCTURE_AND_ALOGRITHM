#include <iostream>
#include <vector>
using namespace std;
void rotate (vector<int>& nums,int k){
    int n = nums.size();
    vector <int> temp(n);
    for(int i = 0; i<n; i++){
        temp[(i+k)% n] = nums[i];

    }
    for (int i=0;i < nums.size(); i++){
        nums[i] =  temp[i];
    }
}
int main(){
    int size,k;
    cout << "size of array is =" << endl;
    cin >> size;
    vector <int> nums(size);
    cout << "enter the elements" << endl;
    for(int i=0; i< size; i++){
        cin >> nums[i];

    }
    cout << "enter the value of k" << endl;
    cin >> k;
    rotate ( nums,k);
    cout << " rotated array is =" << endl;
    for (int i= 0; i< size; i++){
        cout << nums[i] << " ";

    }
    return 0;
 }