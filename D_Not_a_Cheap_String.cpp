#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;

void solve();

#define forn(i, n) for (int i = 0; i < int(n); i++);
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
    int p;cin>>p;
    int cost=0;
    for(int i=0; i<s.size(); i++){
        cost+=s[i]-'a'+1;
    }
    string w(s);
    sort(w.rbegin(),w.rend());
    map<char,int>mp;
    for(int i=0;i<s.size();  i++){
        if(cost>p){
            mp[w[i]]++;
            cost -=w[i]-'a'+1;
        }
    }

    for(int i=0;i<s.size();   i++){
        if(mp[s[i]]>0){
            mp[s[i]]--;
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
}