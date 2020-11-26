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
    ll y,w;
    cin >> y >> w;
    ll n = abs(max(y,w) - 6) + 1;
    string sss = to_string(n/6);
    if(n == 1)
        cout << "1/6";
    if(n == 2)
        cout << "1/3";
    if(n == 3)
        cout << "1/2";
    if(n == 4)
        cout << "2/3";
    if(n == 5)
        cout << "5/6";
    if(n == 6)
        cout << "1/1";
    if(n == 0)
        cout << "0/1";
    
    return 0;
}
