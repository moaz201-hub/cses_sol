#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
void TC() {
    string s ; cin >> s ;
    int cnt = 1 , mx = -1 ;
    for ( int i = 1 ; i <(int) s.size() ; i++ ) {
        if ( s[i] == s[i-1] ) cnt ++ ;
        else cnt = 1 ;
        mx = max ( cnt , mx );
    } cout << max ( cnt , mx )  ;
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
