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
    string s;cin>>s;
    vector<char>v;
    int f=1;
    for(int i=0; i<n-1; i++){
        if(s[i]!=s[i+1])v.push_back(s[i]);
    }
    v.push_back(s[n-1]);
    if(v.size()>2)cout<<1<<endl;
    else cout<<v.size()<<endl;
   
}