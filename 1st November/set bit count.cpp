class Solution{
public:
    int countSetBits(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            int num = i;
            while (num > 1) {
                cnt += num & 1;
                num >>= 1;
            }
            if (num == 1) cnt += 1;
        }
        return cnt;
    }
};
