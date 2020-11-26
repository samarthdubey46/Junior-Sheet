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
    vector<char> a(t, '-');
    re(i, t)
    {
        string t1;
        cin >> t1;
        // cout << t1[1] << endl;
        if (t1[1] == '0')
            a[i] = 'p';

        if (t1[1] == '1')
            a[i] = 'm';
    }
    vll seen;
    ll g = 0;
    re(i, t - 1)
    {
        if (a[i] != a[i + 1])
        {
            g++;
        }
    }
    cout << g + 1;
    return 0;
}
