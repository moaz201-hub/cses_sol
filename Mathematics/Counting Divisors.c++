#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define all(x) x.begin(), x.end()
#define pb push_back
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
const int dx_all[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy_all[8] = {0, 1, 0, -1, -1, 1, -1, 1};
const int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
 
void TC () {
    int n ; cin >> n ;
    int cnt = 0 ;
    for ( int i = 1 ; i * i <= n ; i++ )
        if ( n % i == 0 ) cnt += n / i == i ? 1 : 2  ;
    cout << cnt << '\n';
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
