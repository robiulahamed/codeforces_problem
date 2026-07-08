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
    ll n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,f=1;
    for(int i=0;i<n-1; i++){
        if(l==1){
            if(v[i]<v[i+1]){
                f=0;
            }
        }
        if(v[i]<v[i+1] && l==0){
            l=0;
        }
        else {
            l=1;
        }
    }
    if(f==0){
        cout<<"NO"<<endl;
    }
    else cout<<"YES\n";
}