class Solution {
  public:
    int count(vector<int>& arr, int target) {
        int a=lower_bound(arr.begin(),arr.end(),target);
        int b=upper_bound(arr.begin(),arr.end(),target);
        return b-a;
    }
};