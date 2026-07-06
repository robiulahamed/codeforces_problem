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
   string s;
   cin>>s;
   s[0]--;
   int ans=s.size();
   sort(s.begin(),s.end());
   int sum=0;
   for(int i=0; i<s.size(); i++){
       sum+=s[i]-'0';
       if(sum<9)ans--;
   }
   cout<<ans<<endl;
}