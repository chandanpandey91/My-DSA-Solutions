class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,-1);
        int n = s.size();
        int left = 0;
        int right = 0;
        int len = 0;
        while(right < n ){
            if(hash[s[right]]!=-1){
                left = max(hash[s[right]]+1,left);
            }
            hash[s[right]] = right;
            len = max(len, right-left+1);
            right++;
        }
    return len;
    }
};
