#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>str,vector<string>output,int index,vector<vector<string>>&ans){
    if(index >= str.size()){
     ans.push_back(output);
      return;
     
    }
    // exclude
    solve(str,output,index+1,ans);
    // include
    output.push_back(str[index]);
    
    solve(str,output,index+1,ans);
    output.pop_back();



}

vector<vector<string>>subsets(vector<string>& p){
    vector<vector<string>> ans;
    vector<string> output;
    int index = 0;
    solve(p,output,index,ans);
    return ans;
}
int main() {
    vector<string> input = {"a", "b", "c"};
    vector<vector<string>> result = subsets(input);

    cout << "Subsets are:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (const auto& str : subset) {
            cout << str << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}