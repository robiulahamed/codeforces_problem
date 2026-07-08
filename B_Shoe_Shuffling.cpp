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
    vector<int>v(n),ans(n);
    int i=0;
    forn(i,n){
        cin>>v[i];
        ans[i]=i+1;
    }
    forn(i,n-1){
        if(v[i]==v[i+1]){
            swap(ans[i],ans[i+1]);
        }
    }
    forn(i,n){
        if(ans[i]==i+1){
            cout<<-1<<endl;
            return;
        }
    }
    forn(i,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}