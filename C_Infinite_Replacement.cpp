#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;

void solve();

#define forn(i, n) for (int i = 0; i < int(n); i++)

// int fact(int a){
//     if(a==0 || a==1)return 1;

//     int result = a*fact(a-1);
//     return result;
    
// }

int main(){
    fastio;
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    string s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0; i<t.size(); i++){
        if(t[i] == 'a')cnt++;
    }
    ll sum =0;

    
   if(cnt==1 && t=="a")cout<<1<<endl;
   else if(cnt>=1) cout<<"-1\n";
   else{
    int n=s.size();
    cout<<(1ll<<n)<<endl;
   }
}