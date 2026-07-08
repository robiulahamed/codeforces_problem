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
    ll n,x;
    cin>>n>>x;
    
    ll mn=1e9,mx=0,cnt=0,a;
    for(int i=0;  i<n;  i++){
        cin>>a;
        mx = max(mx,a);
        mn= min(mn,a);
        if(mx-mn>x*2){
            cnt++;
            mn=a;
            mx=a;
        }
    }
   
    cout<<cnt<<endl;
}