class Solution {
private:
    int possible(vector<int>&v,int day,int m,int k){
        int n = v.size();
        int cnt=0;
        int numB=0;
        for(int i=0;i<n;++i){
            if(v[i]<=day){
                cnt++;
            }
            else{
                numB+=(cnt/k);
                cnt=0;
            }
        }
        numB+=(cnt/k);
        return numB >= m;
    }
public:
    int minDays(vector<int>&v, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int lo= *min_element(v.begin(),v.end());
        int hi=*max_element(v.begin(),v.end());
        if(v.size()<val) return -1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(possible(v,mid,m,k)){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
    return lo;
    }
};
