#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vnew;
    // 2nd way of intializing  the vector but it runs on compliers only
    // vector <int>v3 = {1,2,3,4,5};
    // for(int i=0;i<vnew.size();i++){
        // cout << vnew[i];
    // }
    vnew.push_back(2);
    vnew.push_back(0);
    vnew.push_back(4);
    vnew.push_back(9);
    sort(vnew.begin(),vnew.end());
    for(int i=0;i<vnew.size();i++){
         cout << vnew[i];
    }
    // sorting in descending order
    sort(vnew.begin(),vnew.end(),greater<int>());
    for(int i=0;i<vnew.size();i++){
         cout << vnew[i];
    }
}