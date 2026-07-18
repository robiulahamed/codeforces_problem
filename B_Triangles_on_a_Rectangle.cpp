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
    ll w,h;cin>>w>>h;
    ll n1,n2,n3,n4;cin>>n1;
    vector<ll>v1,v2,v3,v4;
    for(int i=0; i<n1; i++){
        int x;cin>>x;
        v1.push_back(x);
    } cin>>n2;

    for(int i=0; i<n2; i++){
        int x;cin>>x;
        v2.push_back(x);
    } cin>>n3;
    for(int i=0; i<n3;  i++){
        int x; cin>>x;

        v3.push_back(x);
    } cin>>n4;
     for(int i=0; i<n4;  i++){
        int x; cin>>x;

        v4.push_back(x);
    }
    
    ll ans = 0;

ans = max(ans, 1LL * (v1.back() - v1.front()) * h);
ans = max(ans, 1LL * (v2.back() - v2.front()) * h);
ans = max(ans, 1LL * (v3.back() - v3.front()) * w);
ans = max(ans, 1LL * (v4.back() - v4.front()) * w);

cout << ans << '\n';  

}