#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t-->0){
        ll ans = 0;
        ll n;
        cin>>n;
        ll a;
        for(int i = 0; i<n; i++){
            cin>>a;
            ans = (ans | a);
        }
        cout<<ans<<"\n";
    }
    return 0;
}