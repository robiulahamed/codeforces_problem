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
    ll a,b,c,m;
    cin>>a>>b>>c>>m;

    auto f=[&](ll x,ll y,ll z){
        return (m/x *6 - m/lcm(x,y) * 3 - m/lcm(x,z) *3 + m/lcm(lcm(x,y),z) *2);
    };


    cout<<f(a,b,c)<<" "<< f(b,a,c)<<" "<<f(c,b,a)<<endl;
}