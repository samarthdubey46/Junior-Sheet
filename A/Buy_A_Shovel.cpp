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
    ll k, r;
    cin >> k >> r;
    ll i = 1;
    if(k == r ){
        cout << 1;
        return 0;
    }   

    while (((k * i) - r) % 10 != 0 && ((k * i)) % 10 != 0)
    {
        i++;
    }

    // while (((k * i) - r) % 10 == 0)
    // {
    //     i++;
    // }
    cout << i;

    return 0;
}
