class Solution {
public:
    void moveZeroes(vector<int>&v) {
        int n=v.size();
        int value=count(v.begin(),v.end(),0);
        v.erase(remove(v.begin(), v.end(), 0), v.end());
         v.insert(v.end(),value,0); 
    }
};