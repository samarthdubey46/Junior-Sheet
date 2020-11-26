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
    string s;
    cin >> s;
    ll u = 0, l = 0;
    for (char i : s)
    {
        if (isupper(i))
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if (u > l)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else if (l >= u)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    return 0;
}
