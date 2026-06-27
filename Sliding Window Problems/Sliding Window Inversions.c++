#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>using ordered_multiset = tree<T, null_type, less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
using namespace std;
struct seg {
    int sz = 1 ; vector< int64_t > v;
    void init (int n) {while ( sz < n ) sz *= 2 ;  v.assign( 2 * sz , 0);}
    void set ( int i , int64_t val , int x , int lx , int rx ) {
        if ( rx - lx == 1 ) { v[x] = val ; return ; }
        int m = lx + (( rx - lx )>>1) ;
        if ( i < m ) set( i , val , 2 * x + 1 , lx , m);
        else  set( i , val , 2 * x + 2 , m , rx);
        v[x] = min (v[ 2 * x + 1], v[ 2 * x + 2 ]) ;
    }
    void set ( int i , int64_t val ){ set ( i , val , 0 , 0 ,sz ); }
    void add ( int i , int64_t val , int x , int lx , int rx  ) {
        if ( rx - lx == 1 ){ v[x] += val ; return;}
        int m = lx + (( rx - lx )>>1) ;
        if ( i < m ) add( i , val , 2 * x + 1 , lx , m);
        else  add( i , val , 2 * x + 2 , m , rx);
        v[x] =  v[ 2 * x + 1] + v[ 2 * x + 2 ] ;
    }
    void add ( int i , int val ) { add( i , val , 0 , 0 , sz ) ;}
    int64_t  get ( int l , int r , int x , int lx , int rx ) {
        if ( lx >= l && rx <= r ) return v[x];
        if ( lx >= r || rx <= l) return 0;
        int m = lx + (( rx - lx )>>1) ;
        return  get ( l, r , 2 * x + 1 , lx , m) + get ( l, r , 2 * x + 2 , m , rx) ;
    }
    int64_t  get ( int l , int r ) {return get ( l, r  , 0 , 0 , sz ) ;}
};
void TC() {
    seg s ;
    int n , k ; cin >> n >> k ; vector <int> v(n); for ( auto&i : v ) cin >> i ;
    vector < int > tmp = v ;
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    for (int i = 0; i < n; i++) {
        v[i] = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin();
    }
    int mx = tmp.size(); s.init( mx );
    int64_t inv = 0 ;
    for ( int i = 0 ; i < k ; i++  ) {
        s.add( v[i] , 1 );
        inv += s.get ( v[i] + 1 , mx );
    }
    cout << inv << " ";
    for ( int i = k ; i < n ; i++ ) {
        s.add( v[i-k] , -1 );
        inv -= s.get( 0 , v[i-k] );
        inv += s.get ( v[i] + 1 , mx );
        cout << inv << " \n"[i==n-1];
        s.add( v[i] , 1 );
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
