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
    int k=0;
    while((1<<(k+1))<=n-1) k++;
    for(int i=(1<<k)-1; i>=0; i--){
        cout<<i<<" ";
    }
    for(int i=(1<<k); i<n; i++)cout<<i<<" ";
    cout<<endl;
}