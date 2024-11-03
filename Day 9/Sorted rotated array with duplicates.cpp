class Solution {
public:
    int search(vector<int>&v, int k) {
        int lo=0;
        int hi=v.size()-1;
        int mid;
        while(lo<=hi){
            mid=(hi+lo)>>1;
            //checking of sorted halves now
            if(v[mid]==k) return true;
            //edge case 
            if(v[lo]==v[mid] && v[mid]==v[hi]){
                lo=lo+1;
                hi=hi-1;
                continue;
            }
            if(v[lo]<=v[mid]){
                if(v[lo]<=k && k<=v[mid]){
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            else{
                if(v[mid] <= k && k <= v[hi]){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
        }
    return false;
    }
};
