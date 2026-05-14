# include<iostream>
using namespace std;
class Demo {
    public:
    void add(int a,int b){
        cout << "sum" << a+b<<endl;
    }
    void add(int a,int b,int c){
        cout << "sum" << a+b+c << endl;
    }

};
int main(){
    Demo d;
    d.add(2,3);
    d.add(0,2,7);
    return 0;

}
