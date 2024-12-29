class Solution {
public:
  bool f(int ind,int k,vector<int>&v,vector<vector<int>>&dp){
      if(k == 0) return true;
      if(ind == 0) return v[0]==k;
      if(dp[ind][k]!= -1){
          return dp[ind][k];
      }
      bool notTaken = f(ind-1,k,v,dp);
      bool taken = false;
      if(v[ind]<=k){
          taken = f(ind-1,k-v[ind],v,dp);
      }
      return dp[ind][k] = taken || notTaken;
  }
  public:
    bool isSubsetSum(vector<int>&v, int k) {
        int n = v.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        return f(n-1,k,v,dp);
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i=0;i<n;++i){
            totalSum+=nums[i];
        }
        if(totalSum%2==0){
            return isSubsetSum(nums,totalSum/2);
        }
    return false;

    }
};
