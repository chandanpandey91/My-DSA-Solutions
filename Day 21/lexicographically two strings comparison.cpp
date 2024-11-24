#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    int len=min(s1.size(),s2.size());
    bool flag=false;
    for(ll i=0;i<len;++i){
        if(s1[i]==s2[i]){
            continue;
        }
        else{
            if(s1[i]<s2[i]){
                cout<<s1<<endl;
            }
            else{
                cout<<s2<<endl;
            }
        flag=true;
        break;
        }
    }
if(flag==false){
    if(s1.size()<s2.size()){
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
    }
}
return 0;
}
