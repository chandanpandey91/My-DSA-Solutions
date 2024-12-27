#include <bits/stdc++.h>
using namespace std;

bool canplace(vector<int>&stalls,int k,int mid){
    int n = stalls.size();
    int cnt = 1;
    int last = stalls[0];
    for(int i = 0; i < n; ++i){
      if (stalls[i] - last >= mid) {
        cnt++;
        last = stalls[i];
      }
    }
    if(cnt >= k){
        return true;
    }
    return false;
}



int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin(),stalls.end());
   int n = stalls.size();
   int lo = 1;
   int hi = stalls[n-1] - stalls[0];
   while(lo<=hi){
       int mid = (lo + hi)/2;
       if(canplace(stalls,k,mid) == true){
           lo = mid+1;
       }
       else{
           hi = mid - 1;
       }
   }
return hi;
}

int main(){
    int test;
    cin>>test;
    int n,k;
    cin>>n>>k;
    vector<int>stalls(n);
    for(int i = 0;i < n; ++i){
        cin>>stalls[i];
    }
    cout<<aggressiveCows(stalls,k);
}
