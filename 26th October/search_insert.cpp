class Solution {
public:
    int searchInsert(vector<int>&v, int target) {
        int n=v.size();
        int lo=0;
        int hi=n;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(v[mid]<target){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
    return lo;
    }
};
