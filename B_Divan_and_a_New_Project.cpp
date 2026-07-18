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

// void solve(){
//     int n;cin>>n;
//     vector<int>v(n);
//     for(int i=0;  i<n; i++){
//         cin>>v[i];
//     }
//     int s;
//     vector<int>orr;
//     orr = v;
//     if(n&1) s=(n+1)/2;
//     else s=n/2+1;
//     sort(v.rbegin(),v.rend());
//     map<int,int>mp;
    
//     int sum=0;
//     int f1=1,f2=s-1;
//     int l=1,r=1;
//     for(int i=0; i<n;  i++){
//         if(i%2==0){
            
          
//             mp[v[i]] =s+f2;
            
//             sum+=(2*l*v[i]);
//             f1++;
//             l++;
//         }
//         else{
//              mp[v[i]] = f2;
             
//              f2--;
//              sum+=(2*r*v[i]);
//              r++;
//         }
//     }
//     cout<<sum<<endl;
//     cout<<s<<" ";
//     for(int i=0; i<n;  i++){
//         cout<<mp[v[i]]<<" ";
//     }
//     cout<<endl;
// }


void solve() {
    ll n;
    cin >> n;

    vector<pair<ll,ll>> v;

    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back({x, i});   // {value, original index}
    }

    ll s;
    if(n & 1) s = (n + 1) / 2;
    else s = n / 2 + 1;

    sort(v.rbegin(), v.rend());

    vector<int> ans(n);

    ll sum = 0;
    ll f1 = 1, f2 = s - 1;
    ll l = 1, r = 1;

    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {

            ans[v[i].second] = s + f1;

            sum += 2 * l * v[i].first;

            f1++;
            l++;
        }
        else {

            ans[v[i].second] = f2;

            sum += 2 * r * v[i].first;

            f2--;
            r++;
        }
    }

    cout << sum << "\n";
    cout << s << " ";

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";

    cout << "\n";
}