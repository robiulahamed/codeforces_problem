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
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0; i<n;  i++){
        for(int j=0; j<m;  j++){
            int x ;cin>>x;
            ar[i][j]=x;
        
            
        }
    }

    int mx=0,sum=0;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            sum=0;
            int ci=i,cj=j;
            while(ci<n && cj<m){
                sum+=(ar[ci][cj]);
                ci++;
                cj++;
            }
            ci=i; cj=j;
            while(ci>=0 && cj>=0){
                sum+=(ar[ci][cj]);
                ci--;
                cj--;
            }
            ci=i;cj=j;
            while(ci>=0 && cj<m)
            {
                sum+=(ar[ci][cj]);
                ci--;
                cj++;
            }
            ci=i;cj=j;
            while(ci<n && cj>=0){
                sum+=ar[ci][cj];
                ci++;
                cj--;
            }
            sum-=ar[i][j]*3;
            mx =max(sum,mx);

        }
    }
    cout<<mx<<endl;
}