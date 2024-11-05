#include <bits/stdc++.h>
using namespace std;

int main() {
    long long test;
    cin>>test;

    while(test--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;++i){
            cin>>v[i];
        }
        for(long long i=0;i<n;++i){
            for(long long j=i;j<n;++j){
                long long maxi= INT_MIN;
                for(long long k=i;k<=j;++k){
                    maxi=max(maxi,v[k]);
                }
                cout<<maxi<<" ";
            }
            
        }
        cout<<endl;
    }

}
