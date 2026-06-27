#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    int n; cin >> n ;
    int64_t s = 1LL * n * ( n + 1 ) / 2 ;
    if ( s & 1 ) return void ( cout << "NO");
    else {
        int64_t x = s>>1 , s1 = 0;
        vector<int> a , b ;
        for ( int i = n ; i > 0 ; --i ) {
            if ( s1 < x && s1 + i <= x ) s1 += i , a.push_back(i);
            else b.push_back(i);
        }cout << "YES\n";
        cout << a.size() << '\n';
        for (auto i :a ) cout << i << " "; cout << "\n";
        cout << b.size() << '\n';
        for (auto i :b ) cout << i << " "; cout << "\n";
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
