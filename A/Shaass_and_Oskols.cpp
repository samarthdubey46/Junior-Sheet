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
    ll n, m;
    cin >> n;
    vector<ll> a(101,0);
    for(int i = 1; i <=n; i++)
        cin >> a[i];
    // in(a, n);
    cin >> m;
    re(i, m)
    {
        ll t1, t2;
        cin >> t1 >> t2;
        ll minus = t2 - 1;
        ll Plus = a[t1] - t2;
        a[t1 - 1] += minus;
        a[t1 + 1] += Plus;
        a[t1] = 0;
    }
    for(int i = 1; i <=n; i++){
        cout << a[i] << endl;
    }
    return 0;
    
}
