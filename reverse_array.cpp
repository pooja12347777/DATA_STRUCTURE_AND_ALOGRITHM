#include <iostream>
#include <vector>
using namespace std;
vector <int> reverse(vector<int> v){
    int s =0, e = v.size()-1;
    while(s<=e){
        swap(v[s] ,v[e]);
        s++;
        e--;

    }
    return v;
}
void print(vector <int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";

    }
    cout << endl;

}
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(4);
    v.push_back(60);
    v.push_back(80);
    vector <int> ans = reverse(v);
    cout << "printing the reverse araay" << endl;
    print(ans);
    return 0;
}