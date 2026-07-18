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
    vector<int>v(n);
    int i=0; 
    forn(i,n)cin>>v[i];
    string s;cin>>s;
    map<int,int>mp,mp1;
    int cnt1=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            mp[v[i]]=0;
            cnt1++;
        }
        else{
            mp[v[i]]=1;
        }
    }
    int start=n-cnt1+1;
    int start2 = 1;
    for(auto &i:mp){
        if(i.second==0){
            i.second=start;
            start++;
        }
        else{
            i.second = start2;
            start2++;
        }
    }

    for(int i=0;  i<n; i++){
        cout<<mp[v[i]]<<" ";
    }
    cout<<endl;

}