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
    int n;cin>>n;
    string a,b;
    cin>>a>>b;
    
    vector<int>va(2),vb(2);
    for(int i=0; i<n; i++){
        va[i%2]+=a[i]=='1';
        vb[i%2]+=b[i]=='1';
    }
    if(va[0]==vb[0] && va[1]==vb[1]) cout<<"YES\n";
    else cout<<"NO\n";
}