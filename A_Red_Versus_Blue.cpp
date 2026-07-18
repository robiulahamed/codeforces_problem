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
    int n,r,b;
    cin>>n>>r>>b;
    int rem,get;
    get = r/(b+1);
    int f  =1;
    rem=r-get*(b+1);
    for(int i=1; i<=b; i++){
        if(f==1){
            for(int j=1; j<=get; j++){
                cout<<"R";
            }
            
            f=0;
        }
        cout<<"B";
        for(int j=1; j<=get; j++){
                cout<<"R";
            }
            if(rem>0){
                cout<<"R";
                rem--;
            }
    }
    cout<<endl;
}