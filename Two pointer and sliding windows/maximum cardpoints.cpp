class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        int lsum = 0, rsum = 0, maxsum = 0;

        for (int i = 0; i < k; ++i) {
            lsum += v[i];
        }

        maxsum = lsum;

        int rind = n-1;

        for (int i = k-1; i >= 0; --i) {
            lsum -= v[i];
            rsum += v[rind];
            rind++;
            maxsum = max(maxsum, lsum + rsum);
        }

        return maxsum;
    }
};
