class Solution {
    static constexpr int N = 1e5 + 10;
    int dp[N];

public:
    Solution() {
        memset(dp, -1, sizeof(dp));
    }

    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (dp[n] != -1) return dp[n];
        return dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};
