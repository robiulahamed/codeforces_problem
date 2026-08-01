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
    ll n;cin>>n;
    vector<ll>v(n),ans;
    int f=0,mx = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(mx<v[i]) mx= v[i];
    }
    if(v[0]==mx || v[n-1]==mx){
        f=1;
    }

    deque<ll>dq;
    if(f){
        if(mx==v[0])
        {
            ans.push_back(v[0]);
            v.erase(v.begin());
        }
        else 
        {
            ans.push_back(v.back());
            v.pop_back();
        }
        for(int i=0; i<v.size(); i++){
            ans.push_back(v[i]);
        }
        reverse(ans.begin(),ans.end());
        for(auto i:ans)cout<<i<<" ";
        cout<<endl;

        // int l=1;
        // while(!v.empty()){
        //     ll a =v.front();
        //     ll b = v.back();
        //     if(l&1){
        //         if(a<b){
        //             dq.push_front(a);
        //             v.erase(v.begin());
        //         }
        //         else{
        //             dq.push_back(b);
        //             v.pop_back();
        //         }
        //         l++;
        //     }
        //     else{
        //         if(a>b){
        //             dq.push_front(a);
        //             v.erase(v.begin());
        //         }
        //         else{
        //             dq.push_back(b);
        //             v.pop_back();
        //         }
        //         l++;
        //     }
        //     if(a==b){
        //         if(n&1)
        //         {
        //             dq.push_front(a);
        //             v.pop_back();
        //         }
        //         else{
        //             dq.push_back(a);
        //             v.pop_back();
        //         }
        //     }
        // }
        // for(auto x:dq) cout<<x<<" ";
        // cout<<endl;

    }
    else cout<<-1<<endl;



}