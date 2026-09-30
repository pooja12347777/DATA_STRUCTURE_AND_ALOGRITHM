class Solution {
public:
bool possible(vector<int>& arr,int day,int m,int k){
    int noofbouquet = 0;
    int cnt = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<=day){
            cnt++;
        }
        else{
            noofbouquet+=(cnt/k);
            cnt =0;
        }
    }
    noofbouquet+=(cnt/k);
    if(noofbouquet>=m){
        return true;
    }
    else{
        return false;
    }

}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL *m*k >bloomDay.size() ){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return low;

        
    }
};