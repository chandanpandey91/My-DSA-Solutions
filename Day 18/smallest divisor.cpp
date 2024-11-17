class Solution {
private:
int sumofdiv(vector<int>&v,int div){
    int n = v.size();
    int sum = 0;
    for(int i=0;i<n;++i){
        sum+=ceil((double)(v[i]) / (double)(div));
    }
return sum;
}

public:
    int smallestDivisor(vector<int>&v, int threshold) {
    int n = v.size();
    int lo=1;
    int hi= *max_element(v.begin(),v.end());
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(sumofdiv(v,mid)<=threshold){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return lo;
    }
};