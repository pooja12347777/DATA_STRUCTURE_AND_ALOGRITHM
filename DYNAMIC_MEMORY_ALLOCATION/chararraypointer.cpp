#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    cout << arr << endl;
    //IMP:- COUT WORKS DIFFERENTLY IN CHAR ARRAY ,PRINTS THE ENTIRE ARRAY
     cout << ch << endl;
     char *c = &ch[0];
     cout << c << endl;
    //  imp
     char temp = 'z';
     char *p = &temp;
     cout << p << endl;
     return 0;
}
