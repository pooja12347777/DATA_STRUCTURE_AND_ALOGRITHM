#include<iostream>
using namespace std;
void reachhome(int src, int dest){
    cout << "source" << src << "destination" << dest << endl;
    if(src == dest){
        return;
    }
    src++;
    reachhome(src,dest);
}
int main(){
    int dest= 10;
    int src= 1;
    cout << endl;
    reachhome(src,dest);
    return 0;

}