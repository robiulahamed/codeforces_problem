#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;

void solve();

#define forn(i, n) for (int i = 0; i < int(n); i++)
int main(){
    fastio;
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    int i=0;
    forn(i,n)cin>>a[i];
    i=0;
    forn(i,n)cin>>b[i];
    
    for(int i=n-1; i>=1;  i--){
        if(a[i]>b[i]){
            ll f= a[i]-b[i];
            a[i-1] = a[i-1]+f;
        }
    }
    if(a[0]<=b[0]) cout<<"YES\n";
    else cout<<"NO\n";

}