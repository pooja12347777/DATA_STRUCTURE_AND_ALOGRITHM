#include <iostream>
#include <string>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;

    }
    return count ;
}
int main(){
    char name[20];
    cout << "enter your name " << endl;
    cin >> name;
    cout << "your name is " ;
    cout << name << endl;
    int len = getlength(name);
    cout << "length: " << len << endl;
    return 0;
}