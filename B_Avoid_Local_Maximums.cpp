#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        ll c = 0;
        for(int i = 1; i<n-1; i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]){
                if(i+2 < n){
                    a[i+1] = max(a[i],a[i+2]);
                }else{
                    a[i+1] = a[i];
                }
                c++;
            }
        }
        cout<<c<<endl;
        for(int i = 0; i<n; i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}