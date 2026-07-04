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
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0; i<n ; i++){
        cin>>a[i];

    }
    for(int j=0; j<n; j++){
        cin>>b[j];
    }

    int ans=0;
    for(int i=0; i<n; i++){
        int j=i;
        for(; j<n && a[j]>b[i]; j++);
            if(j==n){
                ans=-1;
                break;
            }
        
        for(; j>i; j--){
            swap(a[j],a[j-1]);
            ans++;
        }
    }
    cout<<ans<<endl;
    
}