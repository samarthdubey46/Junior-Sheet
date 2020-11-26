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

void solve()
{
    ll n, m;
    cin >> n >> m;
    in(a, n);
    printV(a);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    in(a, t)
        ll i = 0,
           j = t - 1, s = 0, d = 0;
    bool s12 = true;
    while (i != j)
    {
        ll nt = max(a[i], a[j]);
        if (nt == a[j])
            j--;
        else if (nt == a[i])
            i++;
        if (s12)
        {
            s += nt;
            s12 = false;
        }
        else{
            d += nt;
            s12 = true;
        }
    }
    if(t % 2 == 0){
        d += a[i];
    }else if(t % 2 != 0){
        s += a[i];
    }
    cout << s << " " << d;

    return 0;
}
