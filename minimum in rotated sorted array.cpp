class Solution {
public:
    int findMin(vector<int>&v) {
        int lo=0;
        int hi=v.size() - 1;
        int ans= INT_MAX;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(v[lo]<=v[mid]){
                ans=min(ans,v[lo]);
                lo=mid+1;
            }
            else{
                ans=min(ans,v[mid]);
                hi=mid-1;
            }
        }
    return ans;
    }
};
