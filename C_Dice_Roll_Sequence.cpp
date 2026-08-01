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
    vector<int>v(n),a(n,-1);
    int i=0; 
    forn(i,n)cin>>v[i];

    int ans=0;
    // for(int i=1; i<n-1; i++){
    //     if(v[i]+v[i-1] == 7){
    //         ans++ ;
    //         i++;
    //     }
    // }
    // int d = 0;
    // for(int i=1; i<n; i++){
    //     if(v[i] == v[i-1]){
    //         d++;
    //         a[i]=d;
            
    //     }
    //     else{
            
    //         d=0;
    //     }
    // }
    // int t=0;
    // for(int i=n-1; i>=0;  i--){
    //     if(t==0 && a[i]!=0){
    //         ans+=(a[i]+1)/2;
    //         t=1;
    //     }
    //     if(a[i]==0)t=0;
    // }


    for(int i=0; i<n-1;  i++){
        if(!(((v[i]+v[i+1])^7)  && (v[i]-v[i+1]))) {
            ans++,i++;
        }
    }

    cout<<ans<<endl;
}