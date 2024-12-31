class Solution{
    public:
    
    int searchInSorted(int arr[], int N, int K) 
    { 
    vector<int>v;
    for(int i=0;i<N;++i){
        v.push_back(arr[i]);
    }
    int value=count(v.begin(), v.end(), K);
    if (value >= 1) 
        return 1;
    else 
        return -1;
      
       
    }
};