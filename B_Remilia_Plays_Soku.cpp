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
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if(n<=3){
        cout<<1<<endl;
        return;
    }

    ll mn;
    if(x1<x2){
        ll a = x2-x1;
        ll b = (n-x2)+x1;
        mn = min(a,b);
    }
    else{
        ll a = x1-x2;
        ll b = (n-x1)+x2;
        mn = min(a,b);
    }
    cout<<mn+k<<endl;
}