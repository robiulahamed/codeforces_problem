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
    int k;
    cin>>k;
    int a1,a2,b1,b2;
    cin>>a1>>b1>>a2>>b2;
    int sumA=0,sumB=0;
    sumA=a1+a2;
    sumB = b1+b2+k;
    if(sumB>sumA){
        cout<<"YES\n";
    }
    else{
        if(a1<b1 || a2<b2){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}