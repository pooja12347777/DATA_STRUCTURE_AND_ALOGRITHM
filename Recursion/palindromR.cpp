#include<iostream>
using namespace std;
 bool checkpalindrome(string& str,int i){
    int n = str.length();
    if(i>=n/2){
    return  true;
    }
    if(str[i]!= str[n-i-1]){
    return false;
    }else{
    return  checkpalindrome(str,i+1);
    }
    }
int main(){
     string str = {"abbcbba"};
    bool ispalindrome = checkpalindrome(str,0);
    if(ispalindrome){
        cout << "its a palindrome" << endl;
    }
    else{
        cout << "not a palindrome" << endl;
    }
    return 0;
    
}
