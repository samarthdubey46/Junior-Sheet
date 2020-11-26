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
#define sort_a(a) sort(a.begin(), a.end())
#define sort_desc(a) sort(a.begin(), a.end(), greater<ll>())
#define find_a(a, e) find(a.begin(), a.end(), e)
#define count_a(a, e) count(a.begin(), a.end(), e)
#define find_aw(a, e) find(a.begin(), a.end(), e);
#define count_aw(a, e) count(a.begin(), a.end(), e);

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
    char chars_[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', '.', '/'};
    string chars = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char S;
    cin >> S;
    string Written;
    cin >> Written;
    re(i, Written.size())
    {
        auto ii = find_a(chars, Written[i]) - chars.begin();
        if (S == 'R')
        {
            Written[i] = chars[ii - 1];
        }
        else if (S == 'L')
        {
            Written[i] = chars[ii + 1];
        }
    }
    cout << Written;
    return 0;
}
