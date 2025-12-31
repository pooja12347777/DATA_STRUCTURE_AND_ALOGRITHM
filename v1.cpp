#include <iostream>
#include <vector>
using namespace std;
int main() {
    // creating vector
    vector<int> v;
    // size and capacity
    // cout <<" size of v: " << v.size() << endl;
    // cout <<" capacity of v: " << v.capacity() << endl;
    //  pushing elemenets
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // cout <<" size of v: " << v.size() << endl;
    // cout <<" capacity of v: " << v.capacity() << endl;
    // deleting the elements
    v.pop_back();
    cout <<" size of v: " << v.size() << endl;
    cout <<" capacity of v: " << v.capacity() << endl;
    // inserting values
    v.insert(v.begin() + 1,50);
    // printing the element
      for(int i=0;i<v.size();i++){ 
         cout << v[i]<<" ";
        
     }
    
}