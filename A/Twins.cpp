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

void solve()
{
    ll n, m;
    cin >> n >> m;
    in(a, n);
    printV(a);
}

vll slicing(vll &arr, ll X, ll Y)
{

    // Starting and Ending iterators
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;

    // To store the sliced vector
    vll result(Y - X + 1);

    // Copy vector using copy function()
    copy(start, end, result.begin());

    // Return the final sliced vector
    return result;
}

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
    sort_desc(a);
    ll X = 0;
    ll Y = 0;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    vll arr_s = slicing(a, Y+1, n - 1);
    vll arr_first = slicing(a, X, Y);
    ll s_m = accumulate(arr_s.begin(), arr_s.end(), 0);
    ll s_l = accumulate(arr_first.begin(), arr_first.end(), 0);
    // printV(arr_s)
    // cout << s_m << " " << s_l << endl;
    while (s_m >= s_l)
    {
        if (s_l > s_m)
        {
            break;
        }
        Y++;
        arr_s = slicing(a, Y + 1, n - 1);
        arr_first = slicing(a, X, Y);
        s_m = accumulate(arr_s.begin(), arr_s.end(), 0);
        s_l = accumulate(arr_first.begin(), arr_first.end(), 0);
        // printV(arr_first);
        // printV(arr_s);
        // cout << "Last  ->" << s_m << " First -> " << s_l << endl;
        if (s_l > s_m)
        {
            break;
        }

        // cout << s_m << " " << s_l << " " << Y << endl;
        // printV(arr_first);
    }
    cout << Y + 1;
    return 0;
}
