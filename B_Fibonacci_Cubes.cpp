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
    vector<vector<int>>v(m+5);
   for(int i=0; i<m; i++){
    for(int j=0; j<3; j++){
        int x;cin>>x;
        v[i].emplace_back(x);
    }
    sort(v[i].begin(),v[i].end());
   }
   vector<int>fib(n+5);
   fib[0]=1;
   fib[1]=2;
   for(int i=2; i<n+1; i++){
    fib[i]=fib[i-1]+fib[i-2];
   }

   for(int i=0; i<m;  i++){
        if(v[i][0]>=fib[n-1]  && v[i][1]>=fib[n-1] && v[i][2]>=fib[n]){
            cout<<'1';
        }
        else cout<<'0';
   }
   cout<<"\n";
}