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
    ll n; cin>>n;
    vector<ll>v(n);
    int t=n/2;
    int i=0;
    forn(i,n)cin>>v[i];
    sort(v.begin(),v.end());
    int a=v[0];
    i=1;
    while(t--){
        cout<<v[i]<<" "<<a<<endl;
        i++;
    }
}