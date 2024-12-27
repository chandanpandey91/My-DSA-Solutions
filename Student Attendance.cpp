class Solution {
public:
   bool lateCheck(string s){
    int n = s.size();
    for(int i = 0; i < n; ++i){
           if (i <= (n - 3) && s[i] == 'L' && (s[i+1] == 'L' && s[i+2] == 'L')){
                return false;
            }
        }
    return true;
   }
public:
    bool checkRecord(string s) {
        if(count(s.begin(),s.end(),'A')<2 && lateCheck(s)==true){
            return true;
        }    
        return false;
    }
};
