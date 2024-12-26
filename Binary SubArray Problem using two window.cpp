class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int goal) {
        if (goal > 0) {
            return atMost(v, goal) - atMost(v, goal - 1);
        } else {
            return atMost(v, goal);
        }
    }

private:
    int atMost(vector<int>& v, int goal) {
        if (goal < 0) return 0;
        int l = 0, sum = 0, cnt = 0;
        for (int r = 0; r < v.size(); ++r) {
            sum += v[r];
            while (sum > goal) {
                sum -= v[l];
                l++;
            }
            cnt += r - l + 1;
        }
        return cnt;
    }
};
