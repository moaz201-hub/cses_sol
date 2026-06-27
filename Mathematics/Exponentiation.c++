#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define all(x) x.begin(), x.end()
#define pb push_back
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
const int dx_all[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy_all[8] = {0, 1, 0, -1, -1, 1, -1, 1};
const int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
const int mod = 1e9 + 7 ;
void TC () {
    int res = 1 ;
    function < int64_t ( int64_t , int64_t ) > ret = [&]( int64_t b , int64_t p )-> int64_t {
        if ( p == 0 ) return res ;
        if ( p &  1 ) res = ( res * b ) % mod ;
        return ret ( ( b * b ) % mod , p >> 1 ) ;
    };
    int64_t a , b ; cin >> a >> b ; cout << ret ( a , b ) << '\n';
}
int32_t main() {
    ios_base::sync_with_stdio(0) , cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) TC();
    //cout << fixed << setprecision(12);
    // cerr << (double)clock() / CLOCKS_PER_SEC << " Secs";
    return 0;
}
