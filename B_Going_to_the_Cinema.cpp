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
    int n;cin>>n;
    vector<int>v(n);
        for(int i=0;i<n;   i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int ans =(v[0] != 0)+1;

    for(int i=0;i<n; i++){
        int x= i+1;
        if((v[i]<=x-1)&& v[i+1]>x) ans++;
    }
    cout<<ans<<"\n";
}