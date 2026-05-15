#include<iostream>
using namespace std;
class Student{
    public:
    int *marks;
    Student(int value){
        marks = new int (value);

    }

};
int main(){
    Student s1(90);
    //shallow copy
     Student s2 = s1 ;
     cout << *s1.marks << endl;
     cout << s2.marks << endl;
     *s2.marks = 50;
     cout << "after shallow copy" << endl;
     cout << *s1.marks << endl;
     cout << *s2.marks << endl;
     return 0;
}