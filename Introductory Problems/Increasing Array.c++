#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    int n ; cin >> n ; vector <int>v(n); for (auto &i : v ) cin >> i ;
    int64_t s = 0 ;
    for ( int i =1 ; i < n; i++ ) {
        if ( v[i] < v[i-1]) s+= v[i-1] - v[i] , v[i] += v[i-1] - v[i];
    } cout << s ;
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
