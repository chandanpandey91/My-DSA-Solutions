class Solution {
  public:
    string oddEven(int n) {
        if((n & 1)!=0){
            return "odd";
        }
    return "even";
    }
};