// #include<bits/stdc++.h>
// using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
// #define ll long long
// const int INF = 1e9 + 7;
// const ll LINF = 1e18;

// void solve();

// int main(){
//     fastio;
//     ll t; cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// bool ok(int i,int j){
//     return abs(i/3 - j/3)<=1 && abs(i%3-j%3)<=1;
// }

// void solve(){
//     string s1,s2,s3;
//     cin>>s1>>s2>>s3;
//     string s=s1+s2+s3;
//     string l="ccc",t;
//     for(int i=0; i<9; i++){

//            for(int j=0;  j<9;  j++){
//                  for(int k=0; k<9; k++){
//                     if(i!=j &&  j!=k && k!=i && ok(i,j) && ok(j,k)){
//                         t+=s[i];
//                         t+=s[j];
//                         t+=s[k];
//                         l=min(l,t);
//                     }
//                  }
//            }
//     }
//     cout<<t<<endl;
// }





#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
const int INF = 1e9 + 7;
const ll LINF = 1e18;


bool ok(int i, int j){
    return abs(i/3 - j/3) <= 1 && abs(i%3 - j%3) <= 1;
}

int main(){
    fastio; 
    
    string s1, s2, s3;
    if (cin >> s1 >> s2 >> s3) {
        string s = s1 + s2 + s3;
        string l = "zzzz", t; 
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                for(int k=0; k<9; k++){
                    if(i!=j && j!=k && k!=i && ok(i,j) && ok(j,k)){
                        t = ""; 
                        t += s[i];
                        t += s[j];
                        t += s[k];
                        l = min(l, t); 
                    }
                }
            }
        }
        cout << l << "\n"; 
    }
    
    return 0;
}