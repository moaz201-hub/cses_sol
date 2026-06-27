#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    const int mod = 1e9 +7 ;
    function <int64_t ( int64_t  , int64_t, int64_t)  > md = [&]( int64_t b , int64_t p , int64_t ret ) {
        if ( p == 0 ) return ret ;
        if ( p & 1) ret = ( ret * b ) % mod ;
        return md ( ( b * b ) % mod , p>>1 , ret );
    };
    int n ; cin >> n;
    cout << md ( 2 , n , 1 );
}
signed main() {
    ios_base::sync_with_stdio(0) , cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--) TC();
    return 0;
}
