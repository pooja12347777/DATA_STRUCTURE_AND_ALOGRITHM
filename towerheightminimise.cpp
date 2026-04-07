#include<iostream>
#include<algorithm>
using namespace std;

   

int getmindiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int ans = arr[n-1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n-1] -k;
    int mini,maxi;
    for(int i =0;i<n-1;i++){
        mini = min(smallest,arr[i+1]-k);
        maxi = max(largest,arr[i]+k);
        if(mini<0)
        continue;
        ans = min(ans,maxi-mini);
    }
    return ans;

}

int main(){
    int arr[6] = {3,12,9,7,8,2};
    int k = 4;
    int ans = getmindiff(arr,6,k);
    cout << "minimum diff. is:" << ans << endl;

   
    return 0;
}