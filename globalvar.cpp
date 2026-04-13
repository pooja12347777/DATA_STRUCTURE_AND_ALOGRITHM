#include<iostream>
using namespace std;
int score = 95;
void a(int& i){
    cout << "score" << "in a" << endl;
    char ch = 'a' ;

    cout << i << endl;

}
void b(int& i){
    cout << "score" << "in b" << endl;
    cout << i << endl;
}
int main(){
    cout << score << "int main" << endl;
    int i=5;
    a(i);
    b(i);
    return 0;
}