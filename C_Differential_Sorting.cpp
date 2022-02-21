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
        for(int i = 0; i<n; i++)cin>>a[i];
        ll l1 = a[n-1], l2 = a[n-2];
        bool dec = true;
        for(int i = 0; i<n-1; i++){
            if(a[i] > a[i+1]){
                dec = false;
                break;
            }
        }
        if(dec){
            cout<<0<<endl;
            continue;
        }
        if(l2-l1 <= l2 && l2<=l1){
            cout<<n-2<<endl;
            for(int i = 0; i<n-2; i++){
                cout<<i+1<<" "<<n-1<<" "<<n<<endl;
            }
            continue;
        }
        cout<<-1<<endl;
    }
    return 0;
}

