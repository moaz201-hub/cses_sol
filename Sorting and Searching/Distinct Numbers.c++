#include <bits/stdc++.h>
#include <chrono>
#include <math.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define str string
#define nl '\n'
#define all(x) sort(x.begin(),x.end())
#define MP make_pair
#define sz(v) (int)v.size()
#define OO 0x3f3f3f3f 
using namespace std;
// const int siz =2e5 +1 ;
// ll memo[siz];
// const ll x=1e9 + 7 ;
// // ll n,k;  
// ll W[101],N[101];
// ll dp[101][100005+1];ll n,w;
// vector<pair<int, ll >>v;
void solve (){
    int n ; cin>>n; set<ll>st;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        st.insert(x);
    }
    cout<<sz(st)<<nl;
}
int main() {
    // memset(dp, -1 , sizeof(dp));
    FIO
    int t=1;    
    // cin>>t;
    while(t--){
        solve();
    } 
    //    cout << fixed << setprecision(12);
    // cout<<nl;
    // cerr << (double)clock() / CLOCKS_PER_SEC << " Secs";
 
    return 0;
}
 
///////////////////////////////
//////////////////////////////
//////////EL7amla////////////
////////////////////////////
///////////////////////////
