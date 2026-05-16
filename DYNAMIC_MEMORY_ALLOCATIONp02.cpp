#include <iostream>
using namespace std;
int main(){
    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout << p << endl;
    //  cout << *p << endl;
    //  int i = 5;
    //  int *q = &i;
    //  cout << q << endl;
    //  cout << *q << endl;
    // (both are ways to initialize a pointer)
    int num = 5;
    int a = num;
    cout << "a before" << num << endl;
    a++;
    cout << " a after " << num << endl;
    int *p = &num;
    cout << "before" << num <<endl;
    (*p)++;
    cout << "after" <<  num << endl;
    // copying a pointer
    int *q = p;
    cout << p <<  " - " << q << endl;
    cout << *p << " - " << *q << endl;
    // IMPORTANT
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    *t = *t +1;
    cout << *t << endl;
    cout <<  " before t " << t << endl;
    t = t+1;
    cout << " after t" << t << endl;

return 0;

}
