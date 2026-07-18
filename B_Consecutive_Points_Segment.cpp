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
    vector<int>v(n),check;
    int i=0;
    forn(i,n)cin>>v[i];
    for(int i=0;i<n-1;  i++){
        check.push_back(v[i+1]-v[i]);
    }
    int cnt2=0,cnt3=0;
    i=0;
    int n2=check.size();
    forn(i,n2){
        if(check[i]==2)cnt2++;
        else if(check[i]==3) cnt3++;

    }
    if(!check.empty())
    sort(check.rbegin(),check.rend());
    if(check.empty()){
        cout<<"YES\n";
        return;
    }
    if(check[0]>=4){
        cout<<"NO\n";
    }
    else{
        if(check[0]==3){
            if(cnt3==1 && cnt2==0)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(check[0]==2){
            if(cnt2<=2)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }


}