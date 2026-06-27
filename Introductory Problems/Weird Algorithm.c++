#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    int64_t n ; cin >> n ;
    cout << n << " ";
    while ( n != 1) {
        if ( n & 1 ) n = (3 * n ) + 1 ;
        else n/=2;
        cout << n << " \n"[n==1];
    }
}
signed main() {
    ios_base::sync_with_stdio(0) , cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--) TC();
    return 0;
}
