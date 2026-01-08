#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void reverse_string(vector <char> &s){
        int start = 0,e = s.size() -1;
        while(start < e){
            swap(s[start++], s[e--]);
        }

    }

};
int main(){
    Solution sol;
    vector<char> s = {'p','o','o','j','a'};
    sol.reverse_string(s);
    for(char c: s){
        cout << c;
        
    }
    return 0;
}