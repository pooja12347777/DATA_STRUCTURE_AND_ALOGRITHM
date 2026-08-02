#include<iostream>
#include<stack>
using namespace std;
class twostack{
    int *arr;
    int top1;
    int top2;
    int size;
 public:
 twostack(int num){
    
    arr = new int[size];
    size = num;
    top1 = -1;
    top2 = size;
    
 } 
 void push1(int num){
    if(top2- top1 > 1){
        top1 ++;
        arr[top1] = num;
    }
 } 
 void push2(int num){
    if(top2 - top1 >1){
        top2--;
        arr[top2] = num;

    }
 } 
 int pop1(){
    if(top1  >= 1){
        top1 --;
        int ans = arr[top1]; 
    
    return ans;
    }
    else{
        return -1;
    }
 }
 int  pop2(){
    if(top2 < size){
        top2++;
        int ans = arr[top2];
    
    return ans;
    }
    
        else{
            return -1;
        }
    
 }
 
};
int main() {

    twostack st(5);

    st.push1(10);
    st.push1(20);

    st.push2(50);
    st.push2(40);

    // cout << st.pop1() << endl; // 20
    cout << st.pop2() << endl; // 40
    cout << st.pop1() << endl; // 10
    cout << st.pop2() << endl; // 50

    return 0;
}
