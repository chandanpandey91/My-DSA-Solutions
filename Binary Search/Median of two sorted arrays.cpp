// The moment you read about sorted arrays and time complexity of something nearby to OlogN go for binary search 


class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {
        int n1=v1.size();
        int n2=v2.size();
        // always apply binary search over the smaller array 
        if(n1 > n2) return findMedianSortedArrays(v2,v1);
        int part = (n1+n2+1)/2;
        int n = n1+n2;
        int lo=0;
        int hi = n1;
        while(lo<=hi){
            int mid1= (lo + hi) >> 1;
            int mid2= part-mid1;
            int r1=INT_MAX,r2=INT_MAX;
            int l1=INT_MIN,l2=INT_MIN;

            if(mid1<n1) r1=v1[mid1];
            if(mid2<n2) r2=v2[mid2];
            if(mid1>=1) l1=v1[mid1-1];
            if(mid2>=1) l2=v2[mid2-1];
            if(l1<=r2 && l2<=r1){
                if(n%2==1) return max(l1,l2);
                return double(max(l1,l2)+min(r1,r2))/2.0;
            }
        else if(l1>r2){
            hi = mid1-1;
        }
        else{
            lo=mid1+1;
        }
        }
    return 0;
        }
};