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
#define sort_a(a) sort(a.begin(), a.end());
#define sort_desc(a) sort(a.begin(), a.end(), greater<ll>());
#define find_a(a, e) find(a.begin(), a.end(), e);
#define count_a(a, e) count(a.begin(), a.end(), e);
#define find_aw(a, e) find(a.begin(), a.end(), e);
#define count_aw(a, e) count(a.begin(), a.end(), e);

#define printV(a)         \
    for (int i : a)       \
        cout << i << " "; \
    cout << "\n";

// void solve()
// {
//     ll n, m;
//     cin >> n >> m;
//     in(a, n);
//     printV(a);
// }
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
    set<char> s;
    re(i, n)
    {
        char ss;
        cin >> ss;
        if (ss >= 'a' && ss <= 'z')
        {
            s.insert(ss);
        }
        else if (ss >= 'A' && ss <= 'Z')
        {
            ss = ss - 'A' + 'a';
            s.insert(ss);
        }
    }
    if (s.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
