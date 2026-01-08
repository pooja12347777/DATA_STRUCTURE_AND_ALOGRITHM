#include<iostream>
#include <string>
#include <cstring>
using namespace std;
bool checkpalindrome(char a[],int n){
    int s=0 , e = n-1;
    while( s <=e){
        if(a[s] != a[e]){
            return false;
        }
                s++;
                e--;
            }
        
        return true;
    }

    int main(){
        char name[10];
        cout <<  "enter a name";
        cin >> name;
        int len = strlen(name);
        cout << "palindrome or not:";
       if(checkpalindrome(name,len)){
        cout << "yes" << endl;
       }
       else{
        cout << "no" << endl;
       }
        return 0;
    

    }