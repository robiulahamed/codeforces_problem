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
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    
    if(k*b>s || (k*b+n*(k-1)<s)){
        cout<<"-1\n";
    }
    else{
        s=s-k*b;
        for(int i=1; i<n;  i++){
            cout<<min(s,(k-1))<<" ";
            s = s - min(s,(k-1));
        }
        cout<<s+k*b<<endl;
    }
    
    
}