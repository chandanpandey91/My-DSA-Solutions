class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int lo = 0;
        int hi = n-1;
        int index =-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid = (lo + hi)/2;
            if (arr[lo] <= arr[hi]) {
            if (arr[lo] < ans) {
                index = lo;
                ans = arr[lo];
            }
            break;
        }
            if(arr[lo]<=arr[mid]){
                ans=min(ans,arr[lo]);
                index=lo;
                lo=mid+1;
            }
            else{
                ans=min(ans,arr[mid]);
                index=mid;
                hi=mid-1;
            }
        }
    return index;
}
};