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
    int a,b,x;
    cin>>a>>b>>x;
    int ans = abs(a-b);
    int  cnt=0;

    while(a!=0 || b!=0){
        if(a>b) a/=x;
        else b/=x;
        cnt++;

        ans= min(ans,abs(a-b)+cnt);
    }
    cout<<ans<<endl;
}