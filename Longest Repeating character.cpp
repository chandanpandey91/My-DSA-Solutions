class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int maxfreq = 0;
        int hash[26] = {0};

        while (right < s.size()) {
            maxfreq = max(++hash[s[right] - 'A'], maxfreq);
            int len = right - left + 1;

            if (len - maxfreq > k) {
                hash[s[left] - 'A']--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};
