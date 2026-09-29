class Solution {
public:
int findmax(vector<int>& v){
    int maxi= INT_MIN;
    int n = v.size();
        for(int i =0;i<n;i++){
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }

    long long  calculatehr(vector<int>&v,int hrly){
        long long totalh = 0;
        int n = v.size();
        for(int i =0;i<n;i++){
             totalh += ceil((double)v[i] / (double)hrly);
        }
        return totalh;
    }
int minEatingSpeed(vector<int>& piles, int h) {
    int l =1, high = findmax(piles);
    while(l<=high){
        int mid = (l+high)/2;
        long long totalh = calculatehr(piles,mid);
            if(totalh<=h){
                high = mid-1;
            }
            else{
                l = mid+1;
            }
    }
    
    return l;

    
        
    }
};