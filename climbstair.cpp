#include<iostream>
using namespace std;
int countways(long long n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = countways(n-1) + countways(n -2);
    return ans;

}
int main(){
    long long n;
    cout << "enter n";
    cin >> n;
    int ans = countways(n);
    cout << ans;
    return 0;
}