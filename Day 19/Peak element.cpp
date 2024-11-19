class Solution {
public:
    int findPeakElement(vector<int>&v) {
        int n = v.size();
        if(n==1) return 0;
        if(v[0]>v[1]) return 0;
        if(v[n-1]>v[n-2]) return n-1;
        int lo=1;
        int hi=n-2;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){
                return mid;
            }
            else if(v[mid]>v[mid-1]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
    return -1;
    }
};
