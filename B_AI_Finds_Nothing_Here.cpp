#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;

void solve();

int solve(ll bit){
     
    ll base =2;
    ll ans=1;
    while(bit>0){
        if(bit %2 ==1){
            ans = (ans*base)%998244353;
        }
        base = (base*base)%998244353;
        bit/=2;
    }
    return ans;

}

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
    ll n,m,c,r;
    cin>>n>>m>>r>>c;
    ll bit = m*(r-1)+(c-1)*n -(r-1)*(c-1);
    cout<<solve(bit)<<endl;
    
   
}