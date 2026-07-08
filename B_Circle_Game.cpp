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
    int n,i;cin>>n;
    vector<int>v(n);
    int mn=INF;
    forn(i,n){
        cin>>v[i];
        mn = min(mn,v[i]);
    }
    if(n%2==1){
        cout<<"Mike\n";
        
    }
    else{
        for(int i=0;  i<n;  i++){
            if(v[i]==mn){
                if((i+1)%2==1){
                    cout<<"Joe\n";
                    break;
                }
                else{
                    cout<<"Mike\n";break;
                }
            }
        }

    }
}