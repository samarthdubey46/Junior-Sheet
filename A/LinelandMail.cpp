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
    in(a, n);
    // sort(a.begin(), a.end());
    re(i, n)
    {
        ll min_ = 0, max_ = 0;
        if (i == 0)
        {
            min_ = a[i + 1] - a[i];
        }
        else
        {
            if (i != n - 1)
            {
                min_ = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            }else{
                min_ = abs(a[i] - a[i-1]);
            }
        }
        max_ = max(abs(a[n - 1] - a[i]), abs(a[0] - a[i]));
        cout << min_ << " " << max_ << endl;
    }
    return 0;
}
