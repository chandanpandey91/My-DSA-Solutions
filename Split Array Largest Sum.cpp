class Solution {
public:
int countStudents(vector<int>& v, int n, int pages){
    int students = 1;
    int pagesCount = 0;
    for(int i=0;i<n;++i){
        if(pagesCount+v[i]<=pages){
            pagesCount+=v[i];
        }
        else{
            students++;
            pagesCount=v[i];
        }
    }
    return students;
}
public:
int findPages(vector<int>& v, int n, int m) {
   int lo=*max_element(v.begin(),v.end());
   int hi=accumulate(v.begin(),v.end(),0);
   if(m>n) return -1;
   while(lo<=hi){
       int mid = (lo+hi)/2;
       int students = countStudents(v,n,mid);
       if(students>m){
           lo=mid+1;
       }
       else{
           hi=mid-1;
       }
   }
   return lo;
}
public:
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
    }
};
