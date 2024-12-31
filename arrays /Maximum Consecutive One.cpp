class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&v) {
        int n=v.size();
        int count=0;
        int maximum=0;
        for(int i=0;i<n;i++){
            if(v[i]==1) count++;
            else count=0;
         maximum=max(maximum,count);
        }
       
        return maximum;
    }
};