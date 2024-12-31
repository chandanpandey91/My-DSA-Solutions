class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        set<int>s;
        vector<int>v;
        for(int i=0;i<n;++i){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;++i){
            s.insert(arr2[i]);
        }
        for(int value:s){
            v.push_back(value);
        }
    return v;
    }
};