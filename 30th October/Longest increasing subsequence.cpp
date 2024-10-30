class Solution {
public:
    const int N = 2500;
    int dp[2501];
    vector<int> a;
    
    int lis(int i) {
        if (dp[i] != -1) return dp[i];

        int ans = 1;
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j]) {
                ans = max(ans, lis(j) + 1);
            }
        }
        return dp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        a = nums;
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        int max_lis = 1;
        for (int i = 0; i < n; ++i) {
            max_lis = max(max_lis, lis(i));
        }
        return max_lis;
    }
};
