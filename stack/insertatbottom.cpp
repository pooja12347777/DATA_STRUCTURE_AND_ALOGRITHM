#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}
stack<int>pushatbuttom(stack<int>&stack,int x){
    solve(stack,x);
    return stack;
}
int main() {
    stack<int> s;

    // Push some elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    int x;
    cout << "Enter x: ";
    cin >> x;

    pushatbuttom(s, x);

    cout << "Stack after inserting at bottom:\n";

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
