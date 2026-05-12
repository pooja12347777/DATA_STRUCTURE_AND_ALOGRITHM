#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;

    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
};
int main(){
    hero pooja;
    cout<<"pooja health is:" << pooja.gethealth()<< endl;
    pooja.sethealth(80);
    pooja.level = 'a';
    cout<<"health" << pooja.gethealth() << endl;
    cout << "level " << pooja.getlevel() << endl;
    return 0;
}
