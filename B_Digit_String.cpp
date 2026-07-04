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
    string s;
    cin>>s;
    int cnt4=0,ans=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='2') cnt4++;
        else if(s[i] == '3' || s[i] == '1') ans = max(ans+1,cnt4+1);
    }
    ans = max(ans,cnt4);
    cout<<s.size()-ans<<endl;
}