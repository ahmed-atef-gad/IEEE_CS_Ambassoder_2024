#include <bits/stdc++.h>
 
using namespace std;
 
long long s,a;
 
int main() {
   int t;
   cin>>t;
   while(t--){
        int n; cin>>n;
        s=0;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            s+=arr[i];
        }
        a=sqrt(s);
        if(s== a*a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}