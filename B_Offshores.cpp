#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;

void solve();

int main(){
    fastio;
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>a(n),ex(n);
    for(ll i=0;i<n;  i++)cin>>a[i];
    ll sumC=0;

    for(ll i=0;i<n; i++){
        ex[i]= a[i]/x;
        sumC+=ex[i];
    }
    ll ans=0;
    for(ll i=0; i<n; i++){
        ans = max(ans,a[i]+(sumC-ex[i])*y);
    }
    cout<<ans<<endl;
}