#include <bits/stdc++.h>
using namespace std;
int floor(vector<int>&a,int n,int x){
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(a[mid]<=x){
            ans=a[mid];
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return ans;
}

int ceil(vector<int>&a,int n,int x){
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(a[mid]>=x){
            ans=a[mid];
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
    int f=ceil(a,n,x);
    int g=floor(a,n,x);
return make_pair(g,f);
}
