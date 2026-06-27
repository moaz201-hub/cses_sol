#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    int n , m ; cin >> n >> m;
    vector <int64_t> v(n) , pre(n + 1 ) ; for ( int i = 0 ; i < n ; i++ ){ cin >> v[i]; pre[i+1] = pre[i] + v[i]; }
    while ( m-- ) {
        int l , r ; cin >> l >> r ; cout << pre[r] - pre [ l-1 ] << '\n';
    }
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
