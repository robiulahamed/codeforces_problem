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
    vector<int>v(n);
    int i=0;
    forn(i,n)cin>>v[i];
    int idx = 0;
    bool f1=false,f2=false;
    stack<int>st,stt;
    int j=0;
    if(v[0]==1)j =1;
    for(int i=0; i<n-2; i++){
          
          if(v[i]==1){
            if(j==1){
                idx=i+1;
                f1=true;
                break;
            }
            st.pop();
          }
          else{
            st.push(v[i]);
          }

          if(st.empty()){
             f1= true;
             idx =i+1;
             break;
          }
          
    }
    j=0;
    if(v[idx]==1 || v[idx]==2)j=1;
    if(f1){
        for(int i=idx; i<n-1; i++){
           
          if(v[i]==1 || v[i]== 2){
            if(j==1){
                f2=true;
                break;
            }
            stt.pop();
          }
          else{
            stt.push(v[i]);
          }
          if(stt.empty()){
             f2= true;
             
             break;
          }


        }
    }

    if(f1 && f2) cout<<"YES\n";
    else cout<<"NO\n";

}