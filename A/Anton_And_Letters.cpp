
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
    char s[1000];
    char s_;
    ll j = 0;
    while (s_ != '}')
    {
        cin >> s_;
        s[j] = s_;
        j++;
    }
    set<char> arr_;

    re(i, j)
    {
        if (s[i] != '}' && s[i] != '{' && s[i] != ',' && s[i] != ' ')
        {
            arr_.insert(s[i]);
        }
    }
    cout << arr_.size();
    return 0;
}
