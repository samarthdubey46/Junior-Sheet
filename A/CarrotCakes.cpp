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
    ll n, t, k, d;
    cin >> n >> t >> k >> d;
    ll Tm = 0, Tc = 0, Wn = 0, On = 0;
    while (Tc < n)
    {
        Tm += t;
        Tc += k;
    }
    Wn = Tm;
    Tm = 0, Tc = 0;
    while (Tc < n)
    {
        Tm += t;
        Tc += k;
        if(Tm > d){
            Tc += k;
        }
        // cout << Tc << endl;
    }
    On = Tm;
    if (On >= Wn)
        cout << "NO";
    else
        cout << "YES";
    // cout << Wn << " " << On;

    return 0;
}
