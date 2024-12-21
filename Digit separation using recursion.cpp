#include <bits/stdc++.h>
using namespace std;
 
void fun(int n){
   if(n==0){
      return;
   }
   fun(n/10);
   cout<<n%10<<" ";
 }
 
int main(){
    int test;
    cin>>test;
    while(test--){
      int n;
      cin>>n;
      if(n==0){
         cout<<0;
      }
      fun(n);
      cout<<endl;
    }
    
}
