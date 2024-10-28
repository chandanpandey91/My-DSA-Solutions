class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int cnt = count(nums.begin(), nums.end(), target);
        
        if (cnt == 0) {
            return {-1,-1};
        }
        
        
        auto first_it =find(nums.begin(), nums.end(), target);
        int first_index = distance(nums.begin(), first_it);
        
        if (cnt == 1) {
            return {first_index, first_index};
        } else {
            return {first_index, first_index + cnt - 1};
        }
    }
};
