#include<iostream>
using namespace std;
class student{
    public:
    int age;
    student(int a){
        age = a;
    }
    student& operator = (const student &obj){
        cout << "copy assignment operator  called" << endl;

        age = obj.age;
        return *this;

    }
};
int main(){
    student s1(20);
    student s2(13);
    s2 = s1;
    cout << "s1 age" << s1.age << endl;
    cout << "s2 age " << s2.age << endl;
    return 0;
 }

