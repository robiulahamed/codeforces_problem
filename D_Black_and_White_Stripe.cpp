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
    int n,k;
    cin>>n>>k;
    int i=0;
    vector<int>v;
    string s;
    cin>>s;
    int b =0,w=0;
    for(int i=0;  i<n; i++){
        if(s[i]=='B')b++;
        if(i>=k && s[i-k]=='B'){
            b--;
        }
        if(b>w) w=b; 
    }
    cout<<k-w<<endl;
    
    
}