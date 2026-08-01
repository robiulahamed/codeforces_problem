// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// const int INF = 1e9 + 7;
// const ll LINF = 1e18;

// void solve();

// #define forn(i, n) for (int i = 0; i < int(n); i++)
// int main(){
//     fastio;
//     ll t; cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

// void solve(){
//     ll n;cin>>n; 
//     vector<ll>v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     int idx=-1;ll mx=0;
//     for(int i=0; i<n;i++){
//         if(mx<v[i]){
//             mx = v[i];
//             idx = i;
//         }
//     }

//     ll b=v[0],s=0,f=1,flag=0;
//     for(int i=0; i<n-1; i++){
//         if(v[i]<v[i+1]){
//             if(b>v[i+1]){
//                 f=0;
//                 break;
//             }
//             if(b<v[i+1]){
//                 flag = 1;
//                 b=v[i+1];
//             }
//             else if(b==v[i+1]){
//                 flag=0;
//                 b=v[i+1];
//             }
        
            
//         }
//         else{
//             if(s>v[i+1]){
//                 f=0;
//                 break;
//             }
//             if(s==v[i+1] && flag ==1) {
//                 f=0;
//                 break;
//             }
//             s=v[i+1];
//         }

//     }
//     if(f)cout<<"YES\n";
//     else{
//         int l =1;
//         for(int i=idx+1 ;  i<n-1; i++){
//             if(v[i]>v[i+1]){
//                 l=0;
//             }
//         }
//         if(idx!=0){
//             for(int i=idx; i>0;  i--){
//                 if(v[i]<v[i-1]) l=0;
//             }
//         }
//         if(l)cout<<"YES\n";
//         else cout<<"NO\n";
//     }
//  }

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
    ll n;cin>>n;
    vector<ll>v(n);
    int i=0;
    forn(i,n) cin>>v[i];
    ll d  = 0;
    for(int i=1; i<n;  i++){
        d = max(d,v[i-1]-v[i]);
    }
    int f=1;
    for(int i=1; i<n; i++){
        if(v[i-1]>v[i]){
            v[i]+=d;
        }
        if(v[i]<v[i-1]){
            f=0;
            break;
        }
    }
   if(f)cout<<"yes\n";
   else cout<<"no\n";

}