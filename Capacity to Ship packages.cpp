class Solution {

private:
int countOfDays(vector<int>& weights, int cap){
    int n = weights.size();
    int dayCount = 1;
    int loadCheck = 0;
    for(int i = 0; i < n; ++i){
        if((loadCheck + weights[i]) <= cap){
            loadCheck += weights[i];
        }
        else{
            dayCount += 1;
            loadCheck = weights[i];
        }
    }
return dayCount;

}
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(),weights.end());
        int hi = accumulate(weights.begin(),weights.end(),0);
        while(lo<=hi){
            int mid = (lo + hi)/2;
            if(countOfDays(weights,mid) <= days){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
    return lo;
    }
};
