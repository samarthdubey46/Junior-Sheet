#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double fl;
typedef vector<ll> vll;
#define re(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define rep(i, a, n) for (int i = a; i < n; i++)
#define in(a, n) \
    vll a(n);    \
    re(i, n) cin >> a[i];
#define printV(a)         \
    for (int i : a)       \
        cout << i << " "; \
    cout << "\n";


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vll h(n);
    vll g(n);
    re(i,n){
        ll h_,g_;
        cin >> h_ >> g_;
        h[i] = h_;
        g[i] = g_;  
    }
    ll t = 0;
    re(i,n){
        re(j,n){
            if(g[j] == h[i])
                t+=1;
        }
    }
    cout << t;

    return 0;
}
