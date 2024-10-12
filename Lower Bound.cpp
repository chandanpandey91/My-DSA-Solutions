int findFloor(vector<long long> &v, long long n, long long x) {

        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(v[mid]<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    return ans;

    }
