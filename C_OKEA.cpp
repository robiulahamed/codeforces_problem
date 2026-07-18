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
    if(k==1){
        cout<<"YES\n";
        for(int i=1; i<=n; i++){
            cout<<i<<endl;

        }
        
        return;
    }
    
    if(n%2==0){
        int l=1,r=2;
        cout<<"YES\n";
        for(int i=1; i<=n/2; i++){
            for(int  j=1; j<=k; j++){
                cout<<l<<" ";
                l+=2;
            }    
            cout<<endl;        
            
        }
        for(int i=1; i<=n/2; i++){
            for(int  j=1; j<=k; j++){
                cout<<r<<" ";
                r+=2;
            }    
            cout<<endl;        
            
        }
    }
    else cout<<"NO\n";
}