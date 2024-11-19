class Solution {
  public:
    void print_divisors(int n) {
        // Brute force approach
        
        // for(int i=1;i<=n;++i){
        //     if(n%i==0){
        //         cout<<i<<" ";
        //         //TC - O(n);
        //         //SC- depends on the number 
        //     }
        // }
        
        //optimal approach
        vector<int>v;
        for(int i=1;i*i<=n;++i){
            if(n%i==0){
                v.push_back(i);
                if(n/i!=i){
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(),v.end());
        int m=v.size();
        for(int i=0;i<v.size();++i){
            cout<<v[i];
            if (i != v.size() - 1) {
                cout << " ";
            }
        }
    
    }
};
