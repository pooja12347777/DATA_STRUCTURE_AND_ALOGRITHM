#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vnew;
    
    vnew.push_back(2);
    vnew.push_back(0);
    vnew.push_back(4);
    vnew.push_back(9);
    // max value
    int maximum = max_element(vnew.begin(),vnew.end());
   
    for(int i=0;i<vnew.size();i++){
         cout << vnew[i];
    }
}