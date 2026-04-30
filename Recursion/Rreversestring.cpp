#include<iostream>
using namespace std;
void reversestring(string& str, int i){
    int n = str.length()-1;
    if(i>=(n+1)/2)
        return ;
        swap(str[i],str[n-i]);
        reversestring(str,i+1);

    
    
    
}
int main(){
    string str = {"abcd"};
    reversestring(str,0);
    cout << "reversed string " << str << endl;
    return 0;
}