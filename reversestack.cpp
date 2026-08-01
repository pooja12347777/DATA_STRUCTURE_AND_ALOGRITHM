#include<iostream>
#include<stack>
using namespace std;
 void insertatbottom(stack<int>&s,int x){
    if(s.empty()){
    s.push(x);
    return;
    }
    int num = s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(num);

 }
 void reversestack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st,num);
    
    

 }
 int main() {
    stack<int> st;
    // Push some elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    reversestack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

 