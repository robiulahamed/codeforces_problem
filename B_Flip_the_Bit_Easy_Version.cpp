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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int x;cin>>x;
    int l=0,r=0;
    for(int i=x-1; i>=1 ; i--){
        if(v[i] != v[i-1]) l++;
    }
    for(int i=x-1; i<n-1 ; i++){
        if(v[i] != v[i+1]) r++;
    }
    cout<<max(l,r)+max(l,r)%2<<endl;

}