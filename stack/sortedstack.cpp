#include<iostream>
#include<stack>
using namespace std;
void sortedinsert(stack<int>&s,int x){
    if(s.empty()|| s.top()<x){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    sortedinsert(s,x);
    s.push(num);

}
void sortedstack(stack<int>&mystack){
    if(mystack.empty()){
        return;
    }
    int num = mystack.top();
    mystack.pop();
    sortedstack(mystack);
    sortedinsert(mystack,num);

}
int main(){
    stack<int>s;
    s.push(2);
    s.push(9);
    s.push(4);
    s.push(0);
    sortedstack(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

}
