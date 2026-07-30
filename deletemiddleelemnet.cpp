#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&inputstack,int count,int size){
// base case
if(count==size/2){
    inputstack.pop();
    return;
}
int num = inputstack.top();
inputstack.pop();
// recursive call
solve(inputstack,count+1,size);
inputstack.push(num);
}
void deletemiddle(stack<int>&inputstack,int n){
    int count = 0;
    solve(inputstack,count,n);
}
int main() {
    stack<int> s;
 s.push(30);
    s.push(40);
    s.push(50);

    cout << "Original Stack (Top to Bottom): ";
    stack<int> temp = s;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    int n = s.size();

    // Delete the middle element
    deletemiddle(s, n);

    cout << "Stack after deleting middle element (Top to Bottom): ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
