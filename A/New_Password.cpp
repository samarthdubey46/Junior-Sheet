#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double fl;
typedef vector<ll> vll;
#include <time.h>

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
    vector<char> chars = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z'};
    ll n, k;
    srand(time(0));
    cin >> n >> k;
    string final_str(n,'-');
    ll j = 0;
    while (find(final_str.begin(),final_str.end(),'-') != final_str.end())
    {
        for(ll i = 0;i < k;i++){
            final_str[j] = chars[i];
            j++;
        }
    }
    
    cout << final_str;
    return 0;
}
