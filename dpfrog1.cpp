#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;
vector<ll>h;
ll n;
vector<ll>dp(100005,-1);

void solve();
int solves(int idx){
    //base case
    if(idx == n-1)return 0;
    //dp are usaged
    if(dp[idx] !=-1){
        return dp[idx];
    }

    //function body
    ll res1 = abs(h[idx]-h[idx+1])+solves(idx+1);

    ll res2 = 1000000000;
    if(res2+2<n){
        res2 = abs(h[idx]-h[idx+2]) + solves(idx+2);
    }

    ll mn = min(res1,res2);
    dp[idx]=mn;

    return mn;
}


#define forn(i, n) for (int i = 0; i < int(n); i++)
int main(){
    fastio;
    // ll t; cin >> t;
    // while(t--){
    //     solve();
    // }
    cin>>n;
    for(int i=0; i<n;  i++){
        ll x; cin>>x;
        h.push_back(x);
    }
    ll result = solves(0);
    cout<<result<<endl;
    

    return 0;
}

void solve(){
    // cin>>n;
    // for(int i=0; i<n;  i++){
    //     ll x; cin>>x;
    //     h[i]=x;
    // }
    // ll result = solves(0);
    
}