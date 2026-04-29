#include<iostream>
using namespace std;
void reversestring(string& str, int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reversestring(str,i,j);
}
int main(){
    string str = {"pooja"};
    reversestring(str,0,str.length()-1);
    cout << "reversed string" << str << endl;
    return 0;
}
