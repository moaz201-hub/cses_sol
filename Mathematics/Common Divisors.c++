#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define all(x) x.begin(), x.end()
#define pb push_back
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
const int dx_all[8] = {1, 0, -1, 0, 1, 1, -1, -1}, dy_all[8] = {0, 1, 0, -1, -1, 1, -1, 1};
const int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
const int sz = 1e7 + 5;
int cnt[sz]; 
 
void TC () {
    int n;
    cin >> n;
 
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        cnt[val]++;
        max_val = max(max_val, val);
    }
 
    for (int g = max_val; g >= 1; g--) {
        int multiples = 0;
        for (int j = g; j <= max_val; j += g) {
            multiples += cnt[j];
            if (multiples >= 2) {
                cout << g << "\n";
                return;
            }
        }
    }
 
    cout << 1 << "\n"; 
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--) TC();
    return 0;
}
