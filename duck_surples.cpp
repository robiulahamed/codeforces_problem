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
    for(int i=0;  i<n; i++){
        cin>>v[i];
    }
    ll a=v[0];
    for(int i=1; i<n; i++){
        if(v[i]<a){
            a=a+v[i];
        }
        a=v[i];
    }
    cout<<a<<endl;
}